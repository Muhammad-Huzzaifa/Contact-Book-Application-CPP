#ifndef DETAILSOFCONTACTINGROUP_H
#define DETAILSOFCONTACTINGROUP_H

#include <QDialog>
#include <QMessageBox>
#include <QPixmap>
#include "contactsingroupwindow.h"
#include "contactbook.h"

namespace Ui {
class DetailsOfContactInGroup;
}

class DetailsOfContactInGroup : public QDialog
{
    Q_OBJECT

public:
    explicit DetailsOfContactInGroup(quint32 index, quint32 cindex, QWidget *parent = nullptr);
    ~DetailsOfContactInGroup();

private slots:
    void on_RemoveContactFromGroupButton_clicked();

    void on_BackButton_clicked();

private:
    Ui::DetailsOfContactInGroup *ui;
    ContactBook *book;
    quint32 index, cindex;
    Contact contact;
};

#endif // DETAILSOFCONTACTINGROUP_H
