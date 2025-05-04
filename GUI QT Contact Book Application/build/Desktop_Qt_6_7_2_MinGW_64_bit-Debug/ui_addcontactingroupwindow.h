/********************************************************************************
** Form generated from reading UI file 'addcontactingroupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONTACTINGROUPWINDOW_H
#define UI_ADDCONTACTINGROUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddContactInGroupWindow
{
public:
    QFrame *LeftPanel;
    QPushButton *BackButton;
    QFrame *UpperPanel;
    QLabel *Heading;
    QFrame *RightPanel;
    QLabel *OperationHeading;
    QListWidget *ContactListWidget;

    void setupUi(QDialog *AddContactInGroupWindow)
    {
        if (AddContactInGroupWindow->objectName().isEmpty())
            AddContactInGroupWindow->setObjectName("AddContactInGroupWindow");
        AddContactInGroupWindow->resize(700, 500);
        AddContactInGroupWindow->setStyleSheet(QString::fromUtf8("QForm\n"
"{\n"
"	background-color: black;\n"
"}"));
        LeftPanel = new QFrame(AddContactInGroupWindow);
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
        BackButton = new QPushButton(LeftPanel);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(20, 180, 141, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
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
        UpperPanel = new QFrame(AddContactInGroupWindow);
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
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Unispace")});
        font1.setPointSize(20);
        font1.setBold(true);
        Heading->setFont(font1);
        Heading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: darkgray;\n"
"	border: none;\n"
"	color: #31363F;\n"
"}"));
        Heading->setAlignment(Qt::AlignCenter);
        RightPanel = new QFrame(AddContactInGroupWindow);
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
        OperationHeading->setGeometry(QRect(94, 10, 271, 41));
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
        ContactListWidget = new QListWidget(RightPanel);
        ContactListWidget->setObjectName("ContactListWidget");
        ContactListWidget->setGeometry(QRect(75, 70, 401, 321));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Unispace")});
        font3.setPointSize(14);
        ContactListWidget->setFont(font3);
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

        retranslateUi(AddContactInGroupWindow);

        QMetaObject::connectSlotsByName(AddContactInGroupWindow);
    } // setupUi

    void retranslateUi(QDialog *AddContactInGroupWindow)
    {
        AddContactInGroupWindow->setWindowTitle(QCoreApplication::translate("AddContactInGroupWindow", "Dialog", nullptr));
        BackButton->setText(QCoreApplication::translate("AddContactInGroupWindow", "BACK", nullptr));
        Heading->setText(QCoreApplication::translate("AddContactInGroupWindow", "CONTACT BOOK APP", nullptr));
        OperationHeading->setText(QCoreApplication::translate("AddContactInGroupWindow", "SELECT CONTACT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddContactInGroupWindow: public Ui_AddContactInGroupWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONTACTINGROUPWINDOW_H
