/********************************************************************************
** Form generated from reading UI file 'contactsingroupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTSINGROUPWINDOW_H
#define UI_CONTACTSINGROUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ContactsInGroupWindow
{
public:
    QFrame *UpperPanel;
    QLabel *Heading;
    QFrame *RightPanel;
    QLabel *OperationHeading;
    QListWidget *ContactListWidget;
    QFrame *LeftPanel;
    QPushButton *DeleteGroupButton;
    QPushButton *BackButton;
    QPushButton *AAddContactToGroupButton;

    void setupUi(QDialog *ContactsInGroupWindow)
    {
        if (ContactsInGroupWindow->objectName().isEmpty())
            ContactsInGroupWindow->setObjectName("ContactsInGroupWindow");
        ContactsInGroupWindow->resize(700, 500);
        ContactsInGroupWindow->setStyleSheet(QString::fromUtf8("QForm\n"
"{\n"
"	background-color: black;\n"
"}"));
        UpperPanel = new QFrame(ContactsInGroupWindow);
        UpperPanel->setObjectName("UpperPanel");
        UpperPanel->setGeometry(QRect(9, 10, 681, 61));
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
        RightPanel = new QFrame(ContactsInGroupWindow);
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
        OperationHeading->setGeometry(QRect(144, 10, 171, 41));
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
        ContactListWidget = new QListWidget(RightPanel);
        ContactListWidget->setObjectName("ContactListWidget");
        ContactListWidget->setGeometry(QRect(75, 70, 401, 321));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Unispace")});
        font2.setPointSize(14);
        ContactListWidget->setFont(font2);
        ContactListWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        ContactListWidget->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{\n"
"	border: none;\n"
"}\n"
"QListWidget::item\n"
"{\n"
"	margin-bottom: 5px;\n"
"	color: darkgray;\n"
"}\n"
"QListWidget::item::hover\n"
"{\n"
"	border-bottom: 1px solid gray;\n"
"}"));
        LeftPanel = new QFrame(ContactsInGroupWindow);
        LeftPanel->setObjectName("LeftPanel");
        LeftPanel->setGeometry(QRect(10, 80, 181, 411));
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
        DeleteGroupButton = new QPushButton(LeftPanel);
        DeleteGroupButton->setObjectName("DeleteGroupButton");
        DeleteGroupButton->setGeometry(QRect(20, 170, 141, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Unispace")});
        DeleteGroupButton->setFont(font3);
        DeleteGroupButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        DeleteGroupButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        BackButton->setFont(font3);
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
        AAddContactToGroupButton = new QPushButton(LeftPanel);
        AAddContactToGroupButton->setObjectName("AAddContactToGroupButton");
        AAddContactToGroupButton->setGeometry(QRect(20, 70, 141, 31));
        AAddContactToGroupButton->setFont(font3);
        AAddContactToGroupButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        AAddContactToGroupButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(ContactsInGroupWindow);

        QMetaObject::connectSlotsByName(ContactsInGroupWindow);
    } // setupUi

    void retranslateUi(QDialog *ContactsInGroupWindow)
    {
        ContactsInGroupWindow->setWindowTitle(QCoreApplication::translate("ContactsInGroupWindow", "Dialog", nullptr));
        Heading->setText(QCoreApplication::translate("ContactsInGroupWindow", "CONTACT BOOK APP", nullptr));
        OperationHeading->setText(QCoreApplication::translate("ContactsInGroupWindow", "GROUPS NAME", nullptr));
        DeleteGroupButton->setText(QCoreApplication::translate("ContactsInGroupWindow", "DELETE GROUP", nullptr));
        BackButton->setText(QCoreApplication::translate("ContactsInGroupWindow", "BACK", nullptr));
        AAddContactToGroupButton->setText(QCoreApplication::translate("ContactsInGroupWindow", "ADD CONTACT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContactsInGroupWindow: public Ui_ContactsInGroupWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTSINGROUPWINDOW_H
