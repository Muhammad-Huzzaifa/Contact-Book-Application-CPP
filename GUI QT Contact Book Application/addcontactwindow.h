#ifndef ADDCONTACTWINDOW_H
#define ADDCONTACTWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "openingwindow.h"
#include "contactbook.h"

namespace Ui {
class AddContactWindow;
}

class AddContactWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddContactWindow(QWidget *parent = nullptr);
    ~AddContactWindow();

private slots:
    void on_SaveContactButton_clicked();

    void on_ClearButton_clicked();

    void on_CancelAddContact_clicked();

private:
    Ui::AddContactWindow *ui;
    ContactBook *book;
};

#endif // ADDCONTACTWINDOW_H
