#ifndef SEARCHHISTORYWINDOW_H
#define SEARCHHISTORYWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "openingwindow.h"
#include "detailswindow.h"
#include "contactbook.h"

namespace Ui {
class SearchHistoryWindow;
}

class SearchHistoryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SearchHistoryWindow(QWidget *parent = nullptr);
    ~SearchHistoryWindow();

private slots:
    void on_BackButton_clicked();

    void on_FrequentlyListWidget_itemDoubleClicked();

    void on_SearchHistoryListWidget__itemDoubleClicked();

private:
    Ui::SearchHistoryWindow *ui;
    ContactBook *book;
    Vector<QString> freqNames;
    Vector<QString> srchNames;
};

#endif // SEARCHHISTORYWINDOW_H
