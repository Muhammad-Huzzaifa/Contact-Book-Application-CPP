#ifndef OPENINGWINDOW_H
#define OPENINGWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "detailswindow.h"
#include "addcontactwindow.h"
#include "searchwindow.h"
#include "searchhistorywindow.h"
#include "groupswindow.h"
#include "contactbook.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class OpeningWindow;
}
QT_END_NAMESPACE

class OpeningWindow : public QMainWindow
{
    Q_OBJECT

public:
    OpeningWindow(QWidget *parent = nullptr);
    ~OpeningWindow();

private slots:
    void on_AddContactButton_clicked();

    void on_SearchContactButton_clicked();

    void on_SearchHistoryButton_clicked();

    void on_GroupsButton_clicked();

    void on_ExitButton_clicked();

    void on_ContactListWidget_itemDoubleClicked();

private:
    Ui::OpeningWindow *ui;
    ContactBook *book;
    Vector<QString> names;
};
#endif // OPENINGWINDOW_H
