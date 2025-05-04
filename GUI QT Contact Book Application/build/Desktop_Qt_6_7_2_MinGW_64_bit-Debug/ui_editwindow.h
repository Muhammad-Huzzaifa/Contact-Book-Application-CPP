/********************************************************************************
** Form generated from reading UI file 'editwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWINDOW_H
#define UI_EDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditWindow
{
public:
    QFrame *LeftPanel;
    QPushButton *SaveContactButton;
    QPushButton *CancelAddContact;
    QPushButton *ClearButton;
    QFrame *RightPanel;
    QLabel *OperationHeading;
    QLabel *FirstNameHeading;
    QLabel *ContactNumberHeading;
    QLabel *HouseHeading;
    QLineEdit *FirstNameInput;
    QLineEdit *LastNameInput;
    QLineEdit *PhoneNumberInput;
    QLineEdit *EmailAddressInput;
    QLineEdit *HouseInput;
    QLineEdit *CountryInput;
    QLineEdit *CityInput;
    QLineEdit *StreetInput;
    QLabel *LastNameHeading;
    QLabel *EmailHeading;
    QLabel *StreetHeading;
    QLabel *CityHeading;
    QLabel *CountryHeading;
    QFrame *UpperPanel;
    QLabel *Heading;

    void setupUi(QDialog *EditWindow)
    {
        if (EditWindow->objectName().isEmpty())
            EditWindow->setObjectName("EditWindow");
        EditWindow->resize(700, 500);
        EditWindow->setStyleSheet(QString::fromUtf8("QForm\n"
"{\n"
"	background-color: black;\n"
"}"));
        LeftPanel = new QFrame(EditWindow);
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
        SaveContactButton = new QPushButton(LeftPanel);
        SaveContactButton->setObjectName("SaveContactButton");
        SaveContactButton->setGeometry(QRect(20, 80, 141, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        SaveContactButton->setFont(font);
        SaveContactButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        SaveContactButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        CancelAddContact = new QPushButton(LeftPanel);
        CancelAddContact->setObjectName("CancelAddContact");
        CancelAddContact->setGeometry(QRect(20, 290, 141, 31));
        CancelAddContact->setFont(font);
        CancelAddContact->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        CancelAddContact->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        ClearButton = new QPushButton(LeftPanel);
        ClearButton->setObjectName("ClearButton");
        ClearButton->setGeometry(QRect(20, 180, 141, 31));
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
        RightPanel = new QFrame(EditWindow);
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
        OperationHeading->setGeometry(QRect(90, 10, 281, 41));
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
        FirstNameHeading = new QLabel(RightPanel);
        FirstNameHeading->setObjectName("FirstNameHeading");
        FirstNameHeading->setGeometry(QRect(60, 70, 91, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Unispace")});
        font2.setPointSize(11);
        font2.setBold(true);
        FirstNameHeading->setFont(font2);
        FirstNameHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        ContactNumberHeading = new QLabel(RightPanel);
        ContactNumberHeading->setObjectName("ContactNumberHeading");
        ContactNumberHeading->setGeometry(QRect(60, 140, 91, 16));
        ContactNumberHeading->setFont(font2);
        ContactNumberHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        HouseHeading = new QLabel(RightPanel);
        HouseHeading->setObjectName("HouseHeading");
        HouseHeading->setGeometry(QRect(60, 280, 141, 16));
        HouseHeading->setFont(font2);
        HouseHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        FirstNameInput = new QLineEdit(RightPanel);
        FirstNameInput->setObjectName("FirstNameInput");
        FirstNameInput->setGeometry(QRect(60, 90, 161, 23));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        FirstNameInput->setFont(font3);
        FirstNameInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}"));
        LastNameInput = new QLineEdit(RightPanel);
        LastNameInput->setObjectName("LastNameInput");
        LastNameInput->setGeometry(QRect(270, 90, 161, 23));
        LastNameInput->setFont(font3);
        LastNameInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        PhoneNumberInput = new QLineEdit(RightPanel);
        PhoneNumberInput->setObjectName("PhoneNumberInput");
        PhoneNumberInput->setGeometry(QRect(60, 160, 281, 23));
        PhoneNumberInput->setFont(font3);
        PhoneNumberInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        EmailAddressInput = new QLineEdit(RightPanel);
        EmailAddressInput->setObjectName("EmailAddressInput");
        EmailAddressInput->setGeometry(QRect(60, 230, 281, 23));
        EmailAddressInput->setFont(font3);
        EmailAddressInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        HouseInput = new QLineEdit(RightPanel);
        HouseInput->setObjectName("HouseInput");
        HouseInput->setGeometry(QRect(60, 300, 161, 23));
        HouseInput->setFont(font3);
        HouseInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        CountryInput = new QLineEdit(RightPanel);
        CountryInput->setObjectName("CountryInput");
        CountryInput->setGeometry(QRect(270, 360, 161, 23));
        CountryInput->setFont(font3);
        CountryInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        CityInput = new QLineEdit(RightPanel);
        CityInput->setObjectName("CityInput");
        CityInput->setGeometry(QRect(60, 360, 161, 23));
        CityInput->setFont(font3);
        CityInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        StreetInput = new QLineEdit(RightPanel);
        StreetInput->setObjectName("StreetInput");
        StreetInput->setGeometry(QRect(270, 300, 161, 23));
        StreetInput->setFont(font3);
        StreetInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        LastNameHeading = new QLabel(RightPanel);
        LastNameHeading->setObjectName("LastNameHeading");
        LastNameHeading->setGeometry(QRect(270, 70, 91, 16));
        LastNameHeading->setFont(font2);
        LastNameHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        EmailHeading = new QLabel(RightPanel);
        EmailHeading->setObjectName("EmailHeading");
        EmailHeading->setGeometry(QRect(60, 210, 91, 16));
        EmailHeading->setFont(font2);
        EmailHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        StreetHeading = new QLabel(RightPanel);
        StreetHeading->setObjectName("StreetHeading");
        StreetHeading->setGeometry(QRect(270, 280, 141, 16));
        StreetHeading->setFont(font2);
        StreetHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        CityHeading = new QLabel(RightPanel);
        CityHeading->setObjectName("CityHeading");
        CityHeading->setGeometry(QRect(60, 340, 141, 16));
        CityHeading->setFont(font2);
        CityHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        CountryHeading = new QLabel(RightPanel);
        CountryHeading->setObjectName("CountryHeading");
        CountryHeading->setGeometry(QRect(270, 340, 141, 16));
        CountryHeading->setFont(font2);
        CountryHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        UpperPanel = new QFrame(EditWindow);
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

        retranslateUi(EditWindow);

        QMetaObject::connectSlotsByName(EditWindow);
    } // setupUi

    void retranslateUi(QDialog *EditWindow)
    {
        EditWindow->setWindowTitle(QCoreApplication::translate("EditWindow", "Dialog", nullptr));
        SaveContactButton->setText(QCoreApplication::translate("EditWindow", "SAVE", nullptr));
        CancelAddContact->setText(QCoreApplication::translate("EditWindow", "CANCLE", nullptr));
        ClearButton->setText(QCoreApplication::translate("EditWindow", "CLEAR", nullptr));
        OperationHeading->setText(QCoreApplication::translate("EditWindow", "UPDATE INFORMATION", nullptr));
        FirstNameHeading->setText(QCoreApplication::translate("EditWindow", "First Name", nullptr));
        ContactNumberHeading->setText(QCoreApplication::translate("EditWindow", "Contact no", nullptr));
        HouseHeading->setText(QCoreApplication::translate("EditWindow", "House no.", nullptr));
        LastNameHeading->setText(QCoreApplication::translate("EditWindow", "Last Name", nullptr));
        EmailHeading->setText(QCoreApplication::translate("EditWindow", "Email", nullptr));
        StreetHeading->setText(QCoreApplication::translate("EditWindow", "Street no.", nullptr));
        CityHeading->setText(QCoreApplication::translate("EditWindow", "City", nullptr));
        CountryHeading->setText(QCoreApplication::translate("EditWindow", "Country", nullptr));
        Heading->setText(QCoreApplication::translate("EditWindow", "CONTACT BOOK APP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditWindow: public Ui_EditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWINDOW_H
