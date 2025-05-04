/********************************************************************************
** Form generated from reading UI file 'searchhistorywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHHISTORYWINDOW_H
#define UI_SEARCHHISTORYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SearchHistoryWindow
{
public:
    QFrame *RightPanel;
    QListWidget *FrequentlyListWidget;
    QListWidget *SearchHistoryListWidget_;
    QLabel *FrequentlyListHeading;
    QLabel *SearchHistoryListHeading;
    QFrame *LeftPanel;
    QPushButton *BackButton;
    QFrame *UpperPanel;
    QLabel *Heading;

    void setupUi(QDialog *SearchHistoryWindow)
    {
        if (SearchHistoryWindow->objectName().isEmpty())
            SearchHistoryWindow->setObjectName("SearchHistoryWindow");
        SearchHistoryWindow->resize(700, 500);
        SearchHistoryWindow->setStyleSheet(QString::fromUtf8("QForm\n"
"{\n"
"	background-color: black;\n"
"}"));
        RightPanel = new QFrame(SearchHistoryWindow);
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
        FrequentlyListWidget = new QListWidget(RightPanel);
        FrequentlyListWidget->setObjectName("FrequentlyListWidget");
        FrequentlyListWidget->setEnabled(true);
        FrequentlyListWidget->setGeometry(QRect(80, 40, 401, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        font.setPointSize(14);
        FrequentlyListWidget->setFont(font);
        FrequentlyListWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        FrequentlyListWidget->setStyleSheet(QString::fromUtf8("QListWidget\n"
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
        FrequentlyListWidget->setAutoScroll(true);
        FrequentlyListWidget->setProperty("showDropIndicator", QVariant(true));
        SearchHistoryListWidget_ = new QListWidget(RightPanel);
        SearchHistoryListWidget_->setObjectName("SearchHistoryListWidget_");
        SearchHistoryListWidget_->setGeometry(QRect(80, 210, 401, 161));
        SearchHistoryListWidget_->setFont(font);
        SearchHistoryListWidget_->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        SearchHistoryListWidget_->setStyleSheet(QString::fromUtf8("QListWidget\n"
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
        FrequentlyListHeading = new QLabel(RightPanel);
        FrequentlyListHeading->setObjectName("FrequentlyListHeading");
        FrequentlyListHeading->setGeometry(QRect(80, 10, 251, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Unispace")});
        font1.setPointSize(11);
        font1.setBold(true);
        FrequentlyListHeading->setFont(font1);
        FrequentlyListHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"	 border-radius: 10px;\n"
"	background-color: lightgray;\n"
"	color: #31363F;\n"
"}"));
        FrequentlyListHeading->setAlignment(Qt::AlignCenter);
        SearchHistoryListHeading = new QLabel(RightPanel);
        SearchHistoryListHeading->setObjectName("SearchHistoryListHeading");
        SearchHistoryListHeading->setGeometry(QRect(80, 180, 141, 21));
        SearchHistoryListHeading->setFont(font1);
        SearchHistoryListHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: none;\n"
"	border-radius: 10px;\n"
"	background-color: lightgray;\n"
"	color: #31363F;\n"
"}"));
        SearchHistoryListHeading->setAlignment(Qt::AlignCenter);
        LeftPanel = new QFrame(SearchHistoryWindow);
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
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Unispace")});
        BackButton->setFont(font2);
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
        UpperPanel = new QFrame(SearchHistoryWindow);
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

        retranslateUi(SearchHistoryWindow);

        QMetaObject::connectSlotsByName(SearchHistoryWindow);
    } // setupUi

    void retranslateUi(QDialog *SearchHistoryWindow)
    {
        SearchHistoryWindow->setWindowTitle(QCoreApplication::translate("SearchHistoryWindow", "Dialog", nullptr));
        FrequentlyListHeading->setText(QCoreApplication::translate("SearchHistoryWindow", "Frequently Viewed Contacts", nullptr));
        SearchHistoryListHeading->setText(QCoreApplication::translate("SearchHistoryWindow", "Search History", nullptr));
        BackButton->setText(QCoreApplication::translate("SearchHistoryWindow", "BACK", nullptr));
        Heading->setText(QCoreApplication::translate("SearchHistoryWindow", "CONTACT BOOK APP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchHistoryWindow: public Ui_SearchHistoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHHISTORYWINDOW_H
