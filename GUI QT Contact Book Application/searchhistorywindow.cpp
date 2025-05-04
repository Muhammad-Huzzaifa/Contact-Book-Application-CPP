#include "searchhistorywindow.h"
#include "ui_searchhistorywindow.h"

SearchHistoryWindow::SearchHistoryWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchHistoryWindow), book{new ContactBook()}, freqNames{book->displayFrequentlyViewedContactsNames()}, srchNames{book->displaySearchedContactsNames()}
{
    ui->setupUi(this);
    QListWidgetItem *item;

    // For frequently viewed contacts
    for (quint32 i{0}; i < freqNames.size(); ++i)
    {
        item = new QListWidgetItem(QIcon(":/resources/images/ContactPhoto.png"), freqNames[i]);
        ui->FrequentlyListWidget->addItem(item);
    }

    // For searched contacts
    for (quint32 i{0}; i < srchNames.size(); ++i)
    {
        item = new QListWidgetItem(QIcon(":/resources/images/ContactPhoto.png"), srchNames[i]);
        ui->SearchHistoryListWidget_->addItem(item);
    }
}

SearchHistoryWindow::~SearchHistoryWindow()
{
    delete ui;
    delete book;
}

void SearchHistoryWindow::on_BackButton_clicked()
{
    if(QMessageBox::question(this, "Confirmation", "Are you sure you want to back?") == QMessageBox::Yes)
    {
        this->close();
        OpeningWindow *openingWindow{new OpeningWindow()};
        openingWindow->show();
    }
}


void SearchHistoryWindow::on_FrequentlyListWidget_itemDoubleClicked()
{
    QModelIndex currentIndex = ui->FrequentlyListWidget->currentIndex();
    quint32 index = static_cast<quint32>(currentIndex.row());
    this->close();
    DetailsWindow *detailsWindow{new DetailsWindow(3, index)};
    detailsWindow->show();
}


void SearchHistoryWindow::on_SearchHistoryListWidget__itemDoubleClicked()
{
    QModelIndex currentIndex = ui->SearchHistoryListWidget_->currentIndex();
    quint32 index = static_cast<quint32>(currentIndex.row());
    this->close();
    DetailsWindow *detailsWindow{new DetailsWindow(4, index)};
    detailsWindow->show();
}

