/********************************************************************************
** Form generated from reading UI file 'openingwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENINGWINDOW_H
#define UI_OPENINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpeningWindow
{
public:
    QWidget *centralwidget;
    QFrame *UpperPanel;
    QLabel *Heading;
    QFrame *RightPanel;
    QLabel *OperationHeading;
    QListWidget *ContactListWidget;
    QFrame *LeftPanel;
    QPushButton *SearchContactButton;
    QPushButton *GroupsButton;
    QPushButton *ExitButton;
    QPushButton *AddContactButton;
    QPushButton *SearchHistoryButton;

    void setupUi(QMainWindow *OpeningWindow)
    {
        if (OpeningWindow->objectName().isEmpty())
            OpeningWindow->setObjectName("OpeningWindow");
        OpeningWindow->resize(700, 500);
        OpeningWindow->setStyleSheet(QString::fromUtf8("QForm\n"
"{\n"
"	background-color: black;\n"
"}"));
        centralwidget = new QWidget(OpeningWindow);
        centralwidget->setObjectName("centralwidget");
        UpperPanel = new QFrame(centralwidget);
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
        RightPanel = new QFrame(centralwidget);
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
        LeftPanel = new QFrame(centralwidget);
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
        SearchContactButton = new QPushButton(LeftPanel);
        SearchContactButton->setObjectName("SearchContactButton");
        SearchContactButton->setGeometry(QRect(20, 120, 141, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Unispace")});
        SearchContactButton->setFont(font3);
        SearchContactButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        SearchContactButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        GroupsButton = new QPushButton(LeftPanel);
        GroupsButton->setObjectName("GroupsButton");
        GroupsButton->setGeometry(QRect(20, 260, 141, 31));
        GroupsButton->setFont(font3);
        GroupsButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        GroupsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        ExitButton = new QPushButton(LeftPanel);
        ExitButton->setObjectName("ExitButton");
        ExitButton->setGeometry(QRect(20, 330, 141, 31));
        ExitButton->setFont(font3);
        ExitButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        ExitButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        AddContactButton = new QPushButton(LeftPanel);
        AddContactButton->setObjectName("AddContactButton");
        AddContactButton->setGeometry(QRect(20, 50, 141, 31));
        AddContactButton->setFont(font3);
        AddContactButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        AddContactButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        SearchHistoryButton = new QPushButton(LeftPanel);
        SearchHistoryButton->setObjectName("SearchHistoryButton");
        SearchHistoryButton->setGeometry(QRect(20, 190, 141, 31));
        SearchHistoryButton->setFont(font3);
        SearchHistoryButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        SearchHistoryButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        SearchContactButton->raise();
        GroupsButton->raise();
        AddContactButton->raise();
        SearchHistoryButton->raise();
        ExitButton->raise();
        OpeningWindow->setCentralWidget(centralwidget);

        retranslateUi(OpeningWindow);

        QMetaObject::connectSlotsByName(OpeningWindow);
    } // setupUi

    void retranslateUi(QMainWindow *OpeningWindow)
    {
        OpeningWindow->setWindowTitle(QCoreApplication::translate("OpeningWindow", "OpeningWindow", nullptr));
        Heading->setText(QCoreApplication::translate("OpeningWindow", "CONTACT BOOK APP", nullptr));
        OperationHeading->setText(QCoreApplication::translate("OpeningWindow", "CONTACTS", nullptr));
        SearchContactButton->setText(QCoreApplication::translate("OpeningWindow", "SEARCH CONTACT", nullptr));
        GroupsButton->setText(QCoreApplication::translate("OpeningWindow", "GROUPS", nullptr));
        ExitButton->setText(QCoreApplication::translate("OpeningWindow", "EXIT", nullptr));
        AddContactButton->setText(QCoreApplication::translate("OpeningWindow", "CREATE CONTACT", nullptr));
        SearchHistoryButton->setText(QCoreApplication::translate("OpeningWindow", "SEARCH HISTORY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpeningWindow: public Ui_OpeningWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENINGWINDOW_H
