#include "editwindow.h"
#include "ui_editwindow.h"

EditWindow::EditWindow(quint32 select, quint32 index, QString search, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditWindow), book{new ContactBook()}, select{select}, index{index}, search{search}
{
    ui->setupUi(this);
    if (select == 1)
        contact = book->getContactByIndex(index);
    else if (select == 2)
    {
        book->advanceSearch(search);
        contact = book->getAdvanceSearchedByIndex(index);
    }
    else if (select == 3)
        contact = book->getFrequentlyViewedByIndex(index);
    else if (select == 4)
        contact = book->getSearchContactByIndex(index);
    ui->FirstNameInput->setText(contact.getFirstName());
    ui->LastNameInput->setText(contact.getLastName());
    ui->PhoneNumberInput->setText(contact.getPhoneNumber());
    ui->EmailAddressInput->setText(contact.getEmail());
    ui->HouseInput->setText(contact.getAddress().getHouseName());
    ui->StreetInput->setText(contact.getAddress().getStreetName());
    ui->CityInput->setText(contact.getAddress().getCityName());
    ui->CountryInput->setText(contact.getAddress().getCountryName());
}

EditWindow::~EditWindow()
{
    delete ui;
    delete book;
}

void EditWindow::on_SaveContactButton_clicked()
{
    QString FirstName{ui->FirstNameInput->text()};
    QString LastName{ui->LastNameInput->text()};
    QString PhoneNumber{ui->PhoneNumberInput->text()};
    QString EmailAddress{ui->EmailAddressInput->text()};
    QString House{ui->HouseInput->text()};
    QString Street{ui->StreetInput->text()};
    QString City{ui->CityInput->text()};
    QString Country{ui->CountryInput->text()};
    if (!(isValidPhoneNumber(PhoneNumber) && isValidEmail(EmailAddress)))
    {
        QMessageBox::critical(this, "Warning!", "Your phone number or email address is in invalid formate!");
        ui->PhoneNumberInput->setText("");
        ui->EmailAddressInput->setText("");
        return;
    }
    else if (FirstName == "" || LastName == "" || PhoneNumber == "" || EmailAddress == "" || House == "" || Street == "" || City == "" || Country == "")
    {
        QMessageBox::critical(this, "Warning!", "Please fill all inputs first...");
        return;
    }

    Contact temp(FirstName, LastName, PhoneNumber, EmailAddress, Address(House, Street, City, Country));
    if (temp == contact)
    {
        QMessageBox::warning(this, "Warning!", "Please first update the contact then save...");
        return;
    }
    else
    {
        if (QMessageBox::question(this, "Confirmation", "Are you sure you want to save changes?") == QMessageBox::Yes)
        {
            if (select == 1)
                book->editContact(index, temp);
            else if (select == 2)
                book->editContactFromAdvanceSearch(index, temp);
            else if (select == 3)
                book->editFrequetlyViewedContact(index, temp);
            else if (select == 4)
                book->edidSearchContact(index, temp);
            this->close();
            OpeningWindow *openingWindow{new OpeningWindow()};
            openingWindow->show();
        }
    }
}


void EditWindow::on_ClearButton_clicked()
{
    ui->FirstNameInput->setText("");
    ui->LastNameInput->setText("");
    ui->PhoneNumberInput->setText("");
    ui->EmailAddressInput->setText("");
    ui->HouseInput->setText("");
    ui->StreetInput->setText("");
    ui->CityInput->setText("");
    ui->CountryInput->setText("");
}


void EditWindow::on_CancelAddContact_clicked()
{
    if (QMessageBox::question(this, "Confirmation", "Are you sure you want cancle and back?") == QMessageBox::Yes)
    {
        this->close();
        DetailsWindow *detailsWindow{new DetailsWindow(select, index)};
        detailsWindow->show();
    }
}

