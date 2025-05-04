#ifndef GROUPSWINDOW_H
#define GROUPSWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "contactsingroupwindow.h"
#include "openingwindow.h"
#include "addgroupwindow.h"
#include "contactbook.h"

namespace Ui {
class GroupsWindow;
}

class GroupsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GroupsWindow(QWidget *parent = nullptr);
    ~GroupsWindow();

private slots:
    void on_AddGroupButton_clicked();

    void on_BackButton_clicked();

    void on_ContactListWidget_itemDoubleClicked();

private:
    Ui::GroupsWindow *ui;
    ContactBook *book;
    Vector<QString> group_names;
};

#endif // GROUPSWINDOW_H
