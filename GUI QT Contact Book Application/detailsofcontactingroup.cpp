#include "detailsofcontactingroup.h"
#include "ui_detailsofcontactingroup.h"

DetailsOfContactInGroup::DetailsOfContactInGroup(quint32 index, quint32 cindex, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DetailsOfContactInGroup), book{new ContactBook()}, index{index}, cindex{cindex}
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/ContactPhoto.png");
    int w{ui->ContactPicture->width()};
    int h{ui->ContactPicture->height()};
    ui->ContactPicture->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    contact = book->getGroupContactByIndex(index, cindex);
    ui->FirstName->setText(contact.getFirstName());
    ui->LastName->setText(contact.getLastName());
    ui->PhoneNumber->setText(contact.getPhoneNumber());
    ui->EmailAddress->setText(contact.getEmail());
    ui->House->setText(contact.getAddress().getHouseName());
    ui->Street->setText(contact.getAddress().getStreetName());
    ui->City->setText(contact.getAddress().getCityName());
    ui->Country->setText(contact.getAddress().getCountryName());
}

DetailsOfContactInGroup::~DetailsOfContactInGroup()
{
    delete ui;
    delete book;
}

void DetailsOfContactInGroup::on_RemoveContactFromGroupButton_clicked()
{
    if (QMessageBox::question(this, "Confirmation", "Are you sure about removing this contact from group?") == QMessageBox::Yes)
    {
        book->deleteContactFromGroup(index, cindex);
        this->close();
        ContactsInGroupWindow *contactsInGroupWindow{new ContactsInGroupWindow(index)};
        contactsInGroupWindow->show();
    }
}


void DetailsOfContactInGroup::on_BackButton_clicked()
{
    if (QMessageBox::question(this, "Confirmation", "Are you sure you want to back?") == QMessageBox::Yes)
    {
        this->close();
        ContactsInGroupWindow *contactsInGroupWindow{new ContactsInGroupWindow(index)};
        contactsInGroupWindow->show();
    }
}

