#include "addcontactwindow.h"
#include "ui_addcontactwindow.h"

AddContactWindow::AddContactWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddContactWindow), book{new ContactBook()}
{
    ui->setupUi(this);
}

AddContactWindow::~AddContactWindow()
{
    delete ui;
    delete book;
}

void AddContactWindow::on_SaveContactButton_clicked()
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
    if (QMessageBox::question(this, "Confirmation", "Are you sure you want to save this contact?") == QMessageBox::Yes)
    {
        book->addContact(temp);
        this->close();
        OpeningWindow *openingWindow{new OpeningWindow()};
        openingWindow->show();
    }
}


void AddContactWindow::on_ClearButton_clicked()
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


void AddContactWindow::on_CancelAddContact_clicked()
{
    if (QMessageBox::question(this, "Confirmation", "Are you sure you want to cancle and back?") == QMessageBox::Yes)
    {
        this->close();
        OpeningWindow *openingWindow{new OpeningWindow()};
        openingWindow->show();
    }
}

