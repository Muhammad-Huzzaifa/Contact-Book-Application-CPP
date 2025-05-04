/********************************************************************************
** Form generated from reading UI file 'detailsofcontactingroup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILSOFCONTACTINGROUP_H
#define UI_DETAILSOFCONTACTINGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DetailsOfContactInGroup
{
public:
    QFrame *UpperPanel;
    QLabel *Heading;
    QFrame *LeftPanel;
    QPushButton *RemoveContactFromGroupButton;
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

    void setupUi(QDialog *DetailsOfContactInGroup)
    {
        if (DetailsOfContactInGroup->objectName().isEmpty())
            DetailsOfContactInGroup->setObjectName("DetailsOfContactInGroup");
        DetailsOfContactInGroup->resize(700, 500);
        DetailsOfContactInGroup->setStyleSheet(QString::fromUtf8("QForm\n"
"{\n"
"	background-color: black;\n"
"}"));
        UpperPanel = new QFrame(DetailsOfContactInGroup);
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
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        font.setPointSize(20);
        font.setBold(true);
        Heading->setFont(font);
        Heading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: darkgray;\n"
"	border: none;\n"
"	color: #31363F;\n"
"}"));
        Heading->setAlignment(Qt::AlignCenter);
        LeftPanel = new QFrame(DetailsOfContactInGroup);
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
        RemoveContactFromGroupButton = new QPushButton(LeftPanel);
        RemoveContactFromGroupButton->setObjectName("RemoveContactFromGroupButton");
        RemoveContactFromGroupButton->setGeometry(QRect(20, 90, 141, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Unispace")});
        RemoveContactFromGroupButton->setFont(font1);
        RemoveContactFromGroupButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        RemoveContactFromGroupButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        BackButton->setGeometry(QRect(20, 270, 141, 31));
        BackButton->setFont(font1);
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
        RightPanel = new QFrame(DetailsOfContactInGroup);
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
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Unispace")});
        font2.setPointSize(15);
        font2.setBold(false);
        OperationHeading->setFont(font2);
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
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        FirstName->setFont(font3);
        FirstName->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        FirstName->setAlignment(Qt::AlignCenter);
        PhoneNumber = new QLabel(RightPanel);
        PhoneNumber->setObjectName("PhoneNumber");
        PhoneNumber->setGeometry(QRect(130, 210, 221, 20));
        PhoneNumber->setFont(font3);
        PhoneNumber->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        PhoneNumber->setAlignment(Qt::AlignCenter);
        EmailAddress = new QLabel(RightPanel);
        EmailAddress->setObjectName("EmailAddress");
        EmailAddress->setGeometry(QRect(130, 260, 221, 20));
        EmailAddress->setFont(font3);
        EmailAddress->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        EmailAddress->setAlignment(Qt::AlignCenter);
        House = new QLabel(RightPanel);
        House->setObjectName("House");
        House->setGeometry(QRect(30, 310, 161, 20));
        House->setFont(font3);
        House->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        House->setAlignment(Qt::AlignCenter);
        Street = new QLabel(RightPanel);
        Street->setObjectName("Street");
        Street->setGeometry(QRect(280, 310, 161, 20));
        Street->setFont(font3);
        Street->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        Street->setAlignment(Qt::AlignCenter);
        City = new QLabel(RightPanel);
        City->setObjectName("City");
        City->setGeometry(QRect(30, 350, 161, 20));
        City->setFont(font3);
        City->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        City->setAlignment(Qt::AlignCenter);
        Country = new QLabel(RightPanel);
        Country->setObjectName("Country");
        Country->setGeometry(QRect(280, 350, 161, 16));
        Country->setFont(font3);
        Country->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        Country->setAlignment(Qt::AlignCenter);
        LastName = new QLabel(RightPanel);
        LastName->setObjectName("LastName");
        LastName->setGeometry(QRect(260, 160, 141, 20));
        LastName->setFont(font3);
        LastName->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"}"));
        LastName->setAlignment(Qt::AlignCenter);

        retranslateUi(DetailsOfContactInGroup);

        QMetaObject::connectSlotsByName(DetailsOfContactInGroup);
    } // setupUi

    void retranslateUi(QDialog *DetailsOfContactInGroup)
    {
        DetailsOfContactInGroup->setWindowTitle(QCoreApplication::translate("DetailsOfContactInGroup", "Dialog", nullptr));
        Heading->setText(QCoreApplication::translate("DetailsOfContactInGroup", "CONTACT BOOK APP", nullptr));
        RemoveContactFromGroupButton->setText(QCoreApplication::translate("DetailsOfContactInGroup", "REMOVE FROM GROUP", nullptr));
        BackButton->setText(QCoreApplication::translate("DetailsOfContactInGroup", "BACK", nullptr));
        OperationHeading->setText(QCoreApplication::translate("DetailsOfContactInGroup", "DETAILS OF CONTACT", nullptr));
        ContactPicture->setText(QCoreApplication::translate("DetailsOfContactInGroup", "TextLabel", nullptr));
        FirstName->setText(QCoreApplication::translate("DetailsOfContactInGroup", "TextLabel", nullptr));
        PhoneNumber->setText(QCoreApplication::translate("DetailsOfContactInGroup", "TextLabel", nullptr));
        EmailAddress->setText(QCoreApplication::translate("DetailsOfContactInGroup", "TextLabel", nullptr));
        House->setText(QCoreApplication::translate("DetailsOfContactInGroup", "TextLabel", nullptr));
        Street->setText(QCoreApplication::translate("DetailsOfContactInGroup", "TextLabel", nullptr));
        City->setText(QCoreApplication::translate("DetailsOfContactInGroup", "TextLabel", nullptr));
        Country->setText(QCoreApplication::translate("DetailsOfContactInGroup", "TextLabel", nullptr));
        LastName->setText(QCoreApplication::translate("DetailsOfContactInGroup", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailsOfContactInGroup: public Ui_DetailsOfContactInGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILSOFCONTACTINGROUP_H
