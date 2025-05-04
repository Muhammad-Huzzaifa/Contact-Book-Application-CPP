#include "contactsingroupwindow.h"
#include "ui_contactsingroupwindow.h"

ContactsInGroupWindow::ContactsInGroupWindow(quint32 index, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ContactsInGroupWindow), book{new ContactBook()}, index{index}, names{book->displayGroupContactsNames(this->index)}
{
    ui->setupUi(this);
    ui->OperationHeading->setText(book->displayGroupNames()[index]);
    QListWidgetItem *item;
    for (quint32 i{0}; i < names.size(); ++i)
    {
        item = new QListWidgetItem(QIcon(":/resources/images/ContactPhoto.png"), names[i]);
        ui->ContactListWidget->addItem(item);
    }
}

ContactsInGroupWindow::~ContactsInGroupWindow()
{
    delete ui;
    delete book;
}

void ContactsInGroupWindow::on_AAddContactToGroupButton_clicked()
{
    this->close();
    AddContactInGroupWindow *addContactInGroupWindow{new AddContactInGroupWindow(index)};
    addContactInGroupWindow->show();
}


void ContactsInGroupWindow::on_DeleteGroupButton_clicked()
{
    if (QMessageBox::question(this, "Confirmation", "Are you sure you want to delete this group?") == QMessageBox::Yes)
    {
        book->deleteGroup(index);
        this->close();
        GroupsWindow *groupsWindow{new GroupsWindow()};
        groupsWindow->show();
    }
}


void ContactsInGroupWindow::on_BackButton_clicked()
{
    if (QMessageBox::question(this, "Confirmation", "Are you sure you want to back?") == QMessageBox::Yes)
    {
        this->close();
        GroupsWindow *groupsWindow{new GroupsWindow()};
        groupsWindow->show();
    }
}


void ContactsInGroupWindow::on_ContactListWidget_itemDoubleClicked()
{
    QModelIndex currentIndex = ui->ContactListWidget->currentIndex();
    quint32 cindex = static_cast<quint32>(currentIndex.row());
    this->close();
    DetailsOfContactInGroup *detailsOfContactInGroup{new DetailsOfContactInGroup(index, cindex)};
    detailsOfContactInGroup->show();
}

