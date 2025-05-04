#include "searchwindow.h"
#include "ui_searchwindow.h"

SearchWindow::SearchWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchWindow), book{new ContactBook()}
{
    ui->setupUi(this);
}

SearchWindow::~SearchWindow()
{
    delete ui;
    delete book;
}

void SearchWindow::on_SearchButton_clicked()
{
    ui->ContactListWidget->clear();
    QString search{ui->SearchInput->text()};
    if (search.isEmpty())
    {
        QMessageBox::critical(this, "Warning!", "Your input section is empty for searching the contact!");
        return;
    }

    book->advanceSearch(search);
    names = book->displayAdvanceSearchedContactsNames();
    if (names.size() == 0)
    {
        ui->ContactListWidget->addItem("No any contact found!");
        return;
    }

    ui->ContactListWidget->addItem("Contacts Found:");
    QListWidgetItem *item;
    for (quint32 i{0}; i < names.size(); ++i)
    {
        item = new QListWidgetItem(QIcon(":/resources/images/ContactPhoto.png"), names[i]);
        ui->ContactListWidget->addItem(item);
    }
}


void SearchWindow::on_BackButton_clicked()
{
    if(QMessageBox::question(this, "Confirmation", "Are you sure you want to back?") == QMessageBox::Yes)
    {
        this->close();
        OpeningWindow *openingWindow{new OpeningWindow()};
        openingWindow->show();
    }
}


void SearchWindow::on_ContactListWidget_itemDoubleClicked()
{
    QModelIndex currentIndex = ui->ContactListWidget->currentIndex();
    quint32 index = static_cast<quint32>(currentIndex.row());
    if (index == 0)
        return;
    this->close();
    DetailsWindow *detailsWindow{new DetailsWindow(2, index - 1, ui->SearchInput->text())};
    detailsWindow->show();
}
