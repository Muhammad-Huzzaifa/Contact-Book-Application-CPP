#include "openingwindow.h"
#include "ui_openingwindow.h"

OpeningWindow::OpeningWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OpeningWindow), book{new ContactBook()}, names{book->displayContactsNames()}
{
    ui->setupUi(this);
    QListWidgetItem *item;
    for (quint32 i{0}; i < names.size(); ++i)
    {
        item = new QListWidgetItem(QIcon(":/resources/images/ContactPhoto.png"), names[i]);
        ui->ContactListWidget->addItem(item);
    }
}

OpeningWindow::~OpeningWindow()
{
    delete ui;
    delete book;
}

void OpeningWindow::on_AddContactButton_clicked()
{
    this->close();
    AddContactWindow *addContactWindow{new AddContactWindow()};
    addContactWindow->show();
}


void OpeningWindow::on_SearchContactButton_clicked()
{
    this->close();
    SearchWindow *searchWindow{new SearchWindow()};
    searchWindow->show();
}


void OpeningWindow::on_SearchHistoryButton_clicked()
{
    this->close();
    SearchHistoryWindow *searchHistoryWindow{new SearchHistoryWindow()};
    searchHistoryWindow->show();
}


void OpeningWindow::on_GroupsButton_clicked()
{
    this->close();
    GroupsWindow *groupsWindow{new GroupsWindow()};
    groupsWindow->show();
}


void OpeningWindow::on_ExitButton_clicked()
{
    if (QMessageBox::question(this, "Confirmation", "Are you sure you want to exit?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
    {
        this->close();
    }
}


void OpeningWindow::on_ContactListWidget_itemDoubleClicked()
{
    QModelIndex currentIndex = ui->ContactListWidget->currentIndex();
    quint32 index = static_cast<quint32>(currentIndex.row());
    this->close();
    DetailsWindow *detailsWindow{new DetailsWindow(1, index)};
    detailsWindow->show();
}

