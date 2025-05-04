#ifndef DETAILSWINDOW_H
#define DETAILSWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include <QPixmap>
#include "openingwindow.h"
#include "editwindow.h"
#include "contactbook.h"

namespace Ui {
class DetailsWindow;
}

class DetailsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DetailsWindow(quint32 select, quint32 index, QString search = "", QWidget *parent = nullptr);
    ~DetailsWindow();

private slots:
    void on_EditContactButton_clicked();

    void on_DeleteContactButton_clicked();

    void on_BackButton_clicked();

private:
    Ui::DetailsWindow *ui;
    ContactBook *book;
    quint32 select, index;
    QString search;
    Contact contact;
};

#endif // DETAILSWINDOW_H
