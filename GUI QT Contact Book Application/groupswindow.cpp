#include "groupswindow.h"
#include "ui_groupswindow.h"

GroupsWindow::GroupsWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GroupsWindow), book{new ContactBook()}, group_names{book->displayGroupNames()}
{
    ui->setupUi(this);
    QListWidgetItem *item;
    for (quint32 i{0}; i < group_names.size(); ++i)
    {
        item = new QListWidgetItem(QIcon(":/resources/images/GroupPhoto.png"), group_names[i]);
        ui->ContactListWidget->addItem(item);
    }
}

GroupsWindow::~GroupsWindow()
{
    delete ui;
    delete book;
}

void GroupsWindow::on_AddGroupButton_clicked()
{
    this->close();
    AddGroupWindow *addGroupWindow{new AddGroupWindow()};
    addGroupWindow->show();
}


void GroupsWindow::on_BackButton_clicked()
{
    if(QMessageBox::question(this, "Confirmation", "Are you sure you want to back?") == QMessageBox::Yes)
    {
        this->close();
        OpeningWindow *openingWindow{new OpeningWindow()};
        openingWindow->show();
    }
}


void GroupsWindow::on_ContactListWidget_itemDoubleClicked()
{
    QModelIndex currentIndex = ui->ContactListWidget->currentIndex();
    quint32 index = static_cast<quint32>(currentIndex.row());
    this->close();
    ContactsInGroupWindow *contactsInGroupWindow{new ContactsInGroupWindow(index)};
    contactsInGroupWindow->show();
}

