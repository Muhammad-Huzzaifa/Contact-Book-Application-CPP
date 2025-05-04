#include "detailswindow.h"
#include "ui_detailswindow.h"

DetailsWindow::DetailsWindow(quint32 select, quint32 index, QString search, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DetailsWindow), book{new ContactBook()}, select{select}, index{index}, search{search}
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/ContactPhoto.png");
    int w{ui->ContactPicture->width()};
    int h{ui->ContactPicture->height()};
    ui->ContactPicture->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    if (select == 1)
        contact = book->getContactByIndex(index);
    else if (select == 2)
    {
        book->advanceSearch(search);
        contact = book->search(index);
    }
    else if (select == 3)
        contact = book->getFrequentlyViewedByIndex(index);
    else if (select == 4)
        contact = book->getSearchContactByIndex(index);
    ui->FirstName->setText(contact.getFirstName());
    ui->LastName->setText(contact.getLastName());
    ui->PhoneNumber->setText(contact.getPhoneNumber());
    ui->EmailAddress->setText(contact.getEmail());
    ui->House->setText(contact.getAddress().getHouseName());
    ui->Street->setText(contact.getAddress().getStreetName());
    ui->City->setText(contact.getAddress().getCityName());
    ui->Country->setText(contact.getAddress().getCountryName());
}

DetailsWindow::~DetailsWindow()
{
    delete ui;
    delete book;
}

void DetailsWindow::on_EditContactButton_clicked()
{
    this->close();
    EditWindow *editWindow{new EditWindow(select, index, search)};
    editWindow->show();
}


void DetailsWindow::on_DeleteContactButton_clicked()
{
    if (QMessageBox::question(this, "Confirmation", "Are you sure you want to delete this contact?") == QMessageBox::Yes)
    {
        if (select == 1)
            book->deleteContact(index);
        else if (select == 2)
            book->deleteContactFromAdvanceSearch(index);
        else if (select == 3)
            book->deleteContactFromFrequently(index);
        else if (select == 4)
            book->deleteContactFromSearch(index);
        this->close();
        OpeningWindow *openingWindow{new OpeningWindow()};
        openingWindow->show();
    }
}


void DetailsWindow::on_BackButton_clicked()
{
    if (QMessageBox::question(this, "Confirmation", "Are you sure you want to back?") == QMessageBox::Yes)
    {
        this->close();
        OpeningWindow *openingWindow{new OpeningWindow()};
        openingWindow->show();
    }
}

