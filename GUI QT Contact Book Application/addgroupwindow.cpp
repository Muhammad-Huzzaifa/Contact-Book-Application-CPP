#include "addgroupwindow.h"
#include "ui_addgroupwindow.h"

AddGroupWindow::AddGroupWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddGroupWindow), book{new ContactBook()}
{
    ui->setupUi(this);
}

AddGroupWindow::~AddGroupWindow()
{
    delete ui;
    delete book;
}

void AddGroupWindow::on_AddButton_clicked()
{
    QString GroupName{ui->GroupNameInput->text()};
    if (GroupName == "")
    {
        QMessageBox::critical(this, "Warning!", "Please fill the input first...");
        return;
    }
    if (QMessageBox::question(this, "Confirmation", "Are you sure you want to add group?") == QMessageBox::Yes)
    {
        book->addGroup(GroupName);
        this->close();
        GroupsWindow *groupsWindow{new GroupsWindow()};
        groupsWindow->show();
    }
}


void AddGroupWindow::on_ClearButton_clicked()
{
    ui->GroupNameInput->setText("");
}


void AddGroupWindow::on_BackButton_clicked()
{
    if(QMessageBox::question(this, "Confirmation", "Are you sure you want to back?") == QMessageBox::Yes)
    {
        this->close();
        GroupsWindow *groupsWindow{new GroupsWindow(this)};
        groupsWindow->show();
    }
}

