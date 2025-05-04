#ifndef ADDCONTACTINGROUPWINDOW_H
#define ADDCONTACTINGROUPWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "contactsingroupwindow.h"
#include "contactbook.h"

namespace Ui {
class AddContactInGroupWindow;
}

class AddContactInGroupWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddContactInGroupWindow(quint32 index, QWidget *parent = nullptr);
    ~AddContactInGroupWindow();

private slots:
    void on_BackButton_clicked();

    void on_ContactListWidget_itemDoubleClicked();

private:
    Ui::AddContactInGroupWindow *ui;
    ContactBook *book;
    quint32 index;
    Vector<QString> names;
};

#endif // ADDCONTACTINGROUPWINDOW_H
