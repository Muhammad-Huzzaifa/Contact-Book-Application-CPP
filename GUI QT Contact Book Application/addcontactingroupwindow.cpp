#include "addcontactingroupwindow.h"
#include "ui_addcontactingroupwindow.h"

AddContactInGroupWindow::AddContactInGroupWindow(quint32 index, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddContactInGroupWindow), book{new ContactBook()}, index{index}, names{book->displayContactsNames()}
{
    ui->setupUi(this);
    QListWidgetItem *item;
    for (quint32 i{0}; i < names.size(); ++i)
    {
        item = new QListWidgetItem(QIcon(":/resources/images/ContactPhoto.png"), names[i]);
        ui->ContactListWidget->addItem(item);
    }
}

AddContactInGroupWindow::~AddContactInGroupWindow()
{
    delete ui;
    delete book;
}

void AddContactInGroupWindow::on_BackButton_clicked()
{
    if (QMessageBox::question(this, "Confirmation", "Are you sure you want to back?") == QMessageBox::Yes)
    {
        this->close();
        ContactsInGroupWindow *contactsInGroupWindow{new ContactsInGroupWindow(index)};
        contactsInGroupWindow->show();
    }
}


void AddContactInGroupWindow::on_ContactListWidget_itemDoubleClicked()
{
    if (QMessageBox::question(this, "Confirmation", "You sure you want to add this contact to your group?") == QMessageBox::Yes)
    {
        QModelIndex currentIndex = ui->ContactListWidget->currentIndex();
        quint32 cindex = static_cast<quint32>(currentIndex.row());
        book->addContactToGroup(index, cindex);
        this->close();
        ContactsInGroupWindow *contactsInGroupWindow{new ContactsInGroupWindow(index)};
        contactsInGroupWindow->show();
    }
}

