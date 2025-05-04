#ifndef CONTACTSINGROUPWINDOW_H
#define CONTACTSINGROUPWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "groupswindow.h"
#include "detailsofcontactingroup.h"
#include "addcontactingroupwindow.h"
#include "contactbook.h"

namespace Ui {
class ContactsInGroupWindow;
}

class ContactsInGroupWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ContactsInGroupWindow(quint32 index, QWidget *parent = nullptr);
    ~ContactsInGroupWindow();

private slots:
    void on_AAddContactToGroupButton_clicked();

    void on_DeleteGroupButton_clicked();

    void on_BackButton_clicked();

    void on_ContactListWidget_itemDoubleClicked();

private:
    Ui::ContactsInGroupWindow *ui;
    ContactBook *book;
    quint32 index;
    Vector<QString> names;
};

#endif // CONTACTSINGROUPWINDOW_H
