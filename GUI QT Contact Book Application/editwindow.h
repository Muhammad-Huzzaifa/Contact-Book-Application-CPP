#ifndef EDITWINDOW_H
#define EDITWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "openingwindow.h"
#include "detailswindow.h"
#include "contactbook.h"

namespace Ui {
class EditWindow;
}

class EditWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditWindow(quint32 select, quint32 index, QString search = "", QWidget *parent = nullptr);
    ~EditWindow();

private slots:
    void on_SaveContactButton_clicked();

    void on_ClearButton_clicked();

    void on_CancelAddContact_clicked();

private:
    Ui::EditWindow *ui;
    ContactBook *book;
    quint32 select, index;
    QString search;
    Contact contact;
};

#endif // EDITWINDOW_H
