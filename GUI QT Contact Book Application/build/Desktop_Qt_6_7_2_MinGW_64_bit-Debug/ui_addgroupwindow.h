/********************************************************************************
** Form generated from reading UI file 'addgroupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGROUPWINDOW_H
#define UI_ADDGROUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddGroupWindow
{
public:
    QFrame *LeftPanel;
    QPushButton *ClearButton;
    QPushButton *BackButton;
    QFrame *RightPanel;
    QLabel *OperationHeading;
    QLineEdit *GroupNameInput;
    QPushButton *AddButton;
    QLabel *GroupNameHeading;
    QFrame *UpperPanel;
    QLabel *Heading;

    void setupUi(QDialog *AddGroupWindow)
    {
        if (AddGroupWindow->objectName().isEmpty())
            AddGroupWindow->setObjectName("AddGroupWindow");
        AddGroupWindow->resize(700, 500);
        AddGroupWindow->setStyleSheet(QString::fromUtf8("QForm\n"
"{\n"
"	background-color: black;\n"
"}"));
        LeftPanel = new QFrame(AddGroupWindow);
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
        ClearButton = new QPushButton(LeftPanel);
        ClearButton->setObjectName("ClearButton");
        ClearButton->setGeometry(QRect(20, 110, 141, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        ClearButton->setFont(font);
        ClearButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        ClearButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        BackButton->setGeometry(QRect(20, 240, 141, 31));
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
        RightPanel = new QFrame(AddGroupWindow);
        RightPanel->setObjectName("RightPanel");
        RightPanel->setGeometry(QRect(211, 80, 481, 411));
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
        GroupNameInput = new QLineEdit(RightPanel);
        GroupNameInput->setObjectName("GroupNameInput");
        GroupNameInput->setGeometry(QRect(90, 190, 321, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        GroupNameInput->setFont(font2);
        GroupNameInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}"));
        AddButton = new QPushButton(RightPanel);
        AddButton->setObjectName("AddButton");
        AddButton->setGeometry(QRect(270, 270, 141, 31));
        AddButton->setFont(font);
        AddButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        AddButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #CED4DA;\n"
"    color: #4CAF50;\n"
"    border: none;\n"
"    padding: 8px 16px;\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #31363F;\n"
"    color: white;\n"
"}"));
        GroupNameHeading = new QLabel(RightPanel);
        GroupNameHeading->setObjectName("GroupNameHeading");
        GroupNameHeading->setGeometry(QRect(90, 130, 141, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Unispace")});
        font3.setPointSize(14);
        font3.setBold(true);
        GroupNameHeading->setFont(font3);
        GroupNameHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"	color: white;\n"
"}"));
        UpperPanel = new QFrame(AddGroupWindow);
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

        retranslateUi(AddGroupWindow);

        QMetaObject::connectSlotsByName(AddGroupWindow);
    } // setupUi

    void retranslateUi(QDialog *AddGroupWindow)
    {
        AddGroupWindow->setWindowTitle(QCoreApplication::translate("AddGroupWindow", "Dialog", nullptr));
        ClearButton->setText(QCoreApplication::translate("AddGroupWindow", "CLEAR", nullptr));
        BackButton->setText(QCoreApplication::translate("AddGroupWindow", "BACK", nullptr));
        OperationHeading->setText(QCoreApplication::translate("AddGroupWindow", "ADD GROUP", nullptr));
        AddButton->setText(QCoreApplication::translate("AddGroupWindow", "ADD", nullptr));
        GroupNameHeading->setText(QCoreApplication::translate("AddGroupWindow", "Group Name", nullptr));
        Heading->setText(QCoreApplication::translate("AddGroupWindow", "CONTACT BOOK APP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddGroupWindow: public Ui_AddGroupWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGROUPWINDOW_H
