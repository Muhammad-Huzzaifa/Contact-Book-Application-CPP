/********************************************************************************
** Form generated from reading UI file 'detailswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILSWINDOW_H
#define UI_DETAILSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DetailsWindow
{
public:
    QFrame *LeftPanel;
    QPushButton *EditContactButton;
    QPushButton *DeleteContactButton;
    QPushButton *BackButton;
    QFrame *RightPanel;
    QLabel *OperationHeading;
    QLabel *ContactPicture;
    QLabel *FirstName;
    QLabel *PhoneNumber;
    QLabel *EmailAddress;
    QLabel *House;
    QLabel *Street;
    QLabel *City;
    QLabel *Country;
    QLabel *LastName;
    QFrame *UpperPanel;
    QLabel *Heading;

    void setupUi(QDialog *DetailsWindow)
    {
        if (DetailsWindow->objectName().isEmpty())
            DetailsWindow->setObjectName("DetailsWindow");
        DetailsWindow->resize(700, 500);
        DetailsWindow->setStyleSheet(QString::fromUtf8("QForm\n"
"{\n"
"	background-color: black;\n"
"}"));
        LeftPanel = new QFrame(DetailsWindow);
        LeftPanel->setObjectName("LeftPanel");
        LeftPanel->setGeometry(QRect(11, 80, 181, 411));
        LeftPanel->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: lightgray;\n"
"    border: 1px solid #31363F;\n"
"    border-radius: 20px;\n"
"}\n"
"\n"
"QFrame:hover {\n"
"    background-color: darkgray;\n"
"}"));
        LeftPanel->setFrameShape(QFrame::StyledPanel);
        LeftPanel->setFrameShadow(QFrame::Raised);
        EditContactButton = new QPushButton(LeftPanel);
        EditContactButton->setObjectName("EditContactButton");
        EditContactButton->setGeometry(QRect(20, 90, 141, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        EditContactButton->setFont(font);
        EditContactButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        EditContactButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #31363F;\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 8px 16px;\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #CED4DA;\n"
"    color: #4CAF50;\n"
"}"));
        DeleteContactButton = new QPushButton(LeftPanel);
        DeleteContactButton->setObjectName("DeleteContactButton");
        DeleteContactButton->setGeometry(QRect(20, 190, 141, 31));
        DeleteContactButton->setFont(font);
        DeleteContactButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        DeleteContactButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #31363F;\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 8px 16px;\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #CED4DA;\n"
"    color: #4CAF50;\n"
"}"));
        BackButton = new QPushButton(LeftPanel);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(20, 290, 141, 31));
        BackButton->setFont(font);
        BackButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        BackButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #31363F;\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 8px 16px;\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #CED4DA;\n"
"    color: #4CAF50;\n"
"}"));
        RightPanel = new QFrame(DetailsWindow);
        RightPanel->setObjectName("RightPanel");
        RightPanel->setGeometry(QRect(210, 80, 481, 411));
        RightPanel->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background-color: #272829;\n"
"	border: 1px solid #31363F;\n"
"	border-radius:20px;\n"
"}"));
        RightPanel->setFrameShape(QFrame::StyledPanel);
        RightPanel->setFrameShadow(QFrame::Raised);
        OperationHeading = new QLabel(RightPanel);
        OperationHeading->setObjectName("OperationHeading");
        OperationHeading->setGeometry(QRect(110, 10, 251, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Unispace")});
        font1.setPointSize(15);
        font1.setBold(false);
        OperationHeading->setFont(font1);
        OperationHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"	background-color: lightgray;\n"
"	color: #31363F;\n"
"}"));
        OperationHeading->setAlignment(Qt::AlignCenter);
        ContactPicture = new QLabel(RightPanel);
        ContactPicture->setObjectName("ContactPicture");
        ContactPicture->setGeometry(QRect(200, 60, 70, 70));
        ContactPicture->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        FirstName = new QLabel(RightPanel);
        FirstName->setObjectName("FirstName");
        FirstName->setGeometry(QRect(80, 160, 141, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Unispace")});
        font2.setPointSize(12);
        font2.setBold(true);
        FirstName->setFont(font2);
        FirstName->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        FirstName->setAlignment(Qt::AlignCenter);
        PhoneNumber = new QLabel(RightPanel);
        PhoneNumber->setObjectName("PhoneNumber");
        PhoneNumber->setGeometry(QRect(130, 210, 221, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Unispace")});
        font3.setPointSize(14);
        font3.setBold(true);
        PhoneNumber->setFont(font3);
        PhoneNumber->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        PhoneNumber->setAlignment(Qt::AlignCenter);
        EmailAddress = new QLabel(RightPanel);
        EmailAddress->setObjectName("EmailAddress");
        EmailAddress->setGeometry(QRect(130, 260, 221, 20));
        EmailAddress->setFont(font2);
        EmailAddress->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        EmailAddress->setAlignment(Qt::AlignCenter);
        House = new QLabel(RightPanel);
        House->setObjectName("House");
        House->setGeometry(QRect(30, 310, 161, 20));
        House->setFont(font2);
        House->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        House->setAlignment(Qt::AlignCenter);
        Street = new QLabel(RightPanel);
        Street->setObjectName("Street");
        Street->setGeometry(QRect(280, 310, 161, 20));
        Street->setFont(font2);
        Street->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        Street->setAlignment(Qt::AlignCenter);
        City = new QLabel(RightPanel);
        City->setObjectName("City");
        City->setGeometry(QRect(30, 350, 161, 20));
        City->setFont(font2);
        City->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        City->setAlignment(Qt::AlignCenter);
        Country = new QLabel(RightPanel);
        Country->setObjectName("Country");
        Country->setGeometry(QRect(280, 350, 161, 16));
        Country->setFont(font2);
        Country->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        Country->setAlignment(Qt::AlignCenter);
        LastName = new QLabel(RightPanel);
        LastName->setObjectName("LastName");
        LastName->setGeometry(QRect(260, 160, 141, 20));
        LastName->setFont(font2);
        LastName->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        LastName->setAlignment(Qt::AlignCenter);
        UpperPanel = new QFrame(DetailsWindow);
        UpperPanel->setObjectName("UpperPanel");
        UpperPanel->setGeometry(QRect(10, 10, 681, 61));
        UpperPanel->setMaximumSize(QSize(16777215, 16777215));
        UpperPanel->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: lightgray;\n"
"    border: 1px solid #31363F;\n"
"    border-radius: 20px;\n"
"}\n"
"\n"
"QFrame:hover {\n"
"    background-color: darkgray;\n"
"}"));
        UpperPanel->setFrameShape(QFrame::StyledPanel);
        UpperPanel->setFrameShadow(QFrame::Raised);
        Heading = new QLabel(UpperPanel);
        Heading->setObjectName("Heading");
        Heading->setGeometry(QRect(174, 10, 291, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Unispace")});
        font4.setPointSize(20);
        font4.setBold(true);
        Heading->setFont(font4);
        Heading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: darkgray;\n"
"	border: none;\n"
"	color: #31363F;\n"
"}"));
        Heading->setAlignment(Qt::AlignCenter);

        retranslateUi(DetailsWindow);

        QMetaObject::connectSlotsByName(DetailsWindow);
    } // setupUi

    void retranslateUi(QDialog *DetailsWindow)
    {
        DetailsWindow->setWindowTitle(QCoreApplication::translate("DetailsWindow", "Dialog", nullptr));
        EditContactButton->setText(QCoreApplication::translate("DetailsWindow", "EDIT CONTACT", nullptr));
        DeleteContactButton->setText(QCoreApplication::translate("DetailsWindow", "DELETE CONTACT", nullptr));
        BackButton->setText(QCoreApplication::translate("DetailsWindow", "BACK", nullptr));
        OperationHeading->setText(QCoreApplication::translate("DetailsWindow", "DETAILS OF CONTACT", nullptr));
        ContactPicture->setText(QCoreApplication::translate("DetailsWindow", "TextLabel", nullptr));
        FirstName->setText(QCoreApplication::translate("DetailsWindow", "TextLabel", nullptr));
        PhoneNumber->setText(QCoreApplication::translate("DetailsWindow", "TextLabel", nullptr));
        EmailAddress->setText(QCoreApplication::translate("DetailsWindow", "TextLabel", nullptr));
        House->setText(QCoreApplication::translate("DetailsWindow", "TextLabel", nullptr));
        Street->setText(QCoreApplication::translate("DetailsWindow", "TextLabel", nullptr));
        City->setText(QCoreApplication::translate("DetailsWindow", "TextLabel", nullptr));
        Country->setText(QCoreApplication::translate("DetailsWindow", "TextLabel", nullptr));
        LastName->setText(QCoreApplication::translate("DetailsWindow", "TextLabel", nullptr));
        Heading->setText(QCoreApplication::translate("DetailsWindow", "CONTACT BOOK APP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailsWindow: public Ui_DetailsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILSWINDOW_H
