#ifndef ADDGROUPWINDOW_H
#define ADDGROUPWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "groupswindow.h"
#include "contactbook.h"

namespace Ui {
class AddGroupWindow;
}

class AddGroupWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddGroupWindow(QWidget *parent = nullptr);
    ~AddGroupWindow();

private slots:
    void on_AddButton_clicked();

    void on_ClearButton_clicked();

    void on_BackButton_clicked();

private:
    Ui::AddGroupWindow *ui;
    ContactBook *book;
};

#endif // ADDGROUPWINDOW_H
