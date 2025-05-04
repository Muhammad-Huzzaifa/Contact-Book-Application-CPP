/********************************************************************************
** Form generated from reading UI file 'searchwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWINDOW_H
#define UI_SEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SearchWindow
{
public:
    QFrame *RightPanel;
    QListWidget *ContactListWidget;
    QPushButton *SearchButton;
    QLineEdit *SearchInput;
    QFrame *LeftPanel;
    QPushButton *BackButton;
    QFrame *UpperPanel;
    QLabel *Heading;

    void setupUi(QDialog *SearchWindow)
    {
        if (SearchWindow->objectName().isEmpty())
            SearchWindow->setObjectName("SearchWindow");
        SearchWindow->resize(700, 500);
        SearchWindow->setStyleSheet(QString::fromUtf8("QForm\n"
"{\n"
"	background-color: black;\n"
"}"));
        RightPanel = new QFrame(SearchWindow);
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
        ContactListWidget = new QListWidget(RightPanel);
        ContactListWidget->setObjectName("ContactListWidget");
        ContactListWidget->setGeometry(QRect(75, 80, 401, 311));
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        font.setPointSize(14);
        ContactListWidget->setFont(font);
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
        SearchButton = new QPushButton(RightPanel);
        SearchButton->setObjectName("SearchButton");
        SearchButton->setGeometry(QRect(370, 20, 101, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Unispace")});
        SearchButton->setFont(font1);
        SearchButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        SearchButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        SearchInput = new QLineEdit(RightPanel);
        SearchInput->setObjectName("SearchInput");
        SearchInput->setGeometry(QRect(22, 20, 331, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        SearchInput->setFont(font2);
        SearchInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}"));
        LeftPanel = new QFrame(SearchWindow);
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
        BackButton = new QPushButton(LeftPanel);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(20, 190, 141, 31));
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
        UpperPanel = new QFrame(SearchWindow);
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
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Unispace")});
        font3.setPointSize(20);
        font3.setBold(true);
        Heading->setFont(font3);
        Heading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: darkgray;\n"
"	border: none;\n"
"	color: #31363F;\n"
"}"));
        Heading->setAlignment(Qt::AlignCenter);

        retranslateUi(SearchWindow);

        QMetaObject::connectSlotsByName(SearchWindow);
    } // setupUi

    void retranslateUi(QDialog *SearchWindow)
    {
        SearchWindow->setWindowTitle(QCoreApplication::translate("SearchWindow", "Dialog", nullptr));
        SearchButton->setText(QCoreApplication::translate("SearchWindow", "SEARCH", nullptr));
        BackButton->setText(QCoreApplication::translate("SearchWindow", "BACK", nullptr));
        Heading->setText(QCoreApplication::translate("SearchWindow", "CONTACT BOOK APP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchWindow: public Ui_SearchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
