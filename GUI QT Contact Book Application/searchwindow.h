#ifndef SEARCHWINDOW_H
#define SEARCHWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "openingwindow.h"
#include "detailswindow.h"
#include "contactbook.h"

namespace Ui {
class SearchWindow;
}

class SearchWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SearchWindow(QWidget *parent = nullptr);
    ~SearchWindow();

private slots:
    void on_SearchButton_clicked();

    void on_BackButton_clicked();

    void on_ContactListWidget_itemDoubleClicked();

private:
    Ui::SearchWindow *ui;
    ContactBook *book;
    Vector<QString> names;
};

#endif // SEARCHWINDOW_H
