/********************************************************************************
** Form generated from reading UI file 'addcontactwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONTACTWINDOW_H
#define UI_ADDCONTACTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddContactWindow
{
public:
    QFrame *UpperPanel;
    QLabel *Heading;
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

    void setupUi(QDialog *AddContactWindow)
    {
        if (AddContactWindow->objectName().isEmpty())
            AddContactWindow->setObjectName("AddContactWindow");
        AddContactWindow->resize(700, 500);
        AddContactWindow->setStyleSheet(QString::fromUtf8("QForm\n"
"{\n"
"	background-color: black;\n"
"}"));
        UpperPanel = new QFrame(AddContactWindow);
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
        LeftPanel = new QFrame(AddContactWindow);
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
        SaveContactButton = new QPushButton(LeftPanel);
        SaveContactButton->setObjectName("SaveContactButton");
        SaveContactButton->setGeometry(QRect(20, 70, 141, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Unispace")});
        SaveContactButton->setFont(font1);
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
        CancelAddContact->setGeometry(QRect(20, 280, 141, 31));
        CancelAddContact->setFont(font1);
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
        ClearButton->setGeometry(QRect(20, 170, 141, 31));
        ClearButton->setFont(font1);
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
        RightPanel = new QFrame(AddContactWindow);
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
        OperationHeading->setGeometry(QRect(134, 10, 191, 41));
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
        FirstNameHeading = new QLabel(RightPanel);
        FirstNameHeading->setObjectName("FirstNameHeading");
        FirstNameHeading->setGeometry(QRect(60, 70, 91, 16));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Unispace")});
        font3.setPointSize(11);
        font3.setBold(true);
        FirstNameHeading->setFont(font3);
        FirstNameHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        ContactNumberHeading = new QLabel(RightPanel);
        ContactNumberHeading->setObjectName("ContactNumberHeading");
        ContactNumberHeading->setGeometry(QRect(60, 140, 91, 16));
        ContactNumberHeading->setFont(font3);
        ContactNumberHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        HouseHeading = new QLabel(RightPanel);
        HouseHeading->setObjectName("HouseHeading");
        HouseHeading->setGeometry(QRect(60, 280, 141, 16));
        HouseHeading->setFont(font3);
        HouseHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        FirstNameInput = new QLineEdit(RightPanel);
        FirstNameInput->setObjectName("FirstNameInput");
        FirstNameInput->setGeometry(QRect(60, 90, 161, 23));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        FirstNameInput->setFont(font4);
        FirstNameInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}"));
        LastNameInput = new QLineEdit(RightPanel);
        LastNameInput->setObjectName("LastNameInput");
        LastNameInput->setGeometry(QRect(270, 90, 161, 23));
        LastNameInput->setFont(font4);
        LastNameInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        PhoneNumberInput = new QLineEdit(RightPanel);
        PhoneNumberInput->setObjectName("PhoneNumberInput");
        PhoneNumberInput->setGeometry(QRect(60, 160, 281, 23));
        PhoneNumberInput->setFont(font4);
        PhoneNumberInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        EmailAddressInput = new QLineEdit(RightPanel);
        EmailAddressInput->setObjectName("EmailAddressInput");
        EmailAddressInput->setGeometry(QRect(60, 230, 281, 23));
        EmailAddressInput->setFont(font4);
        EmailAddressInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        HouseInput = new QLineEdit(RightPanel);
        HouseInput->setObjectName("HouseInput");
        HouseInput->setGeometry(QRect(60, 300, 161, 23));
        HouseInput->setFont(font4);
        HouseInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        CountryInput = new QLineEdit(RightPanel);
        CountryInput->setObjectName("CountryInput");
        CountryInput->setGeometry(QRect(270, 360, 161, 23));
        CountryInput->setFont(font4);
        CountryInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        CityInput = new QLineEdit(RightPanel);
        CityInput->setObjectName("CityInput");
        CityInput->setGeometry(QRect(60, 360, 161, 23));
        CityInput->setFont(font4);
        CityInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        StreetInput = new QLineEdit(RightPanel);
        StreetInput->setObjectName("StreetInput");
        StreetInput->setGeometry(QRect(270, 300, 161, 23));
        StreetInput->setFont(font4);
        StreetInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 10px;\n"
"    color: darkgray; \n"
"}\n"
""));
        LastNameHeading = new QLabel(RightPanel);
        LastNameHeading->setObjectName("LastNameHeading");
        LastNameHeading->setGeometry(QRect(270, 70, 91, 16));
        LastNameHeading->setFont(font3);
        LastNameHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        EmailHeading = new QLabel(RightPanel);
        EmailHeading->setObjectName("EmailHeading");
        EmailHeading->setGeometry(QRect(60, 210, 91, 16));
        EmailHeading->setFont(font3);
        EmailHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        StreetHeading = new QLabel(RightPanel);
        StreetHeading->setObjectName("StreetHeading");
        StreetHeading->setGeometry(QRect(270, 280, 141, 16));
        StreetHeading->setFont(font3);
        StreetHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        CityHeading = new QLabel(RightPanel);
        CityHeading->setObjectName("CityHeading");
        CityHeading->setGeometry(QRect(60, 340, 141, 16));
        CityHeading->setFont(font3);
        CityHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));
        CountryHeading = new QLabel(RightPanel);
        CountryHeading->setObjectName("CountryHeading");
        CountryHeading->setGeometry(QRect(270, 340, 141, 16));
        CountryHeading->setFont(font3);
        CountryHeading->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: none;\n"
"}"));

        retranslateUi(AddContactWindow);

        QMetaObject::connectSlotsByName(AddContactWindow);
    } // setupUi

    void retranslateUi(QDialog *AddContactWindow)
    {
        AddContactWindow->setWindowTitle(QCoreApplication::translate("AddContactWindow", "Dialog", nullptr));
        Heading->setText(QCoreApplication::translate("AddContactWindow", "CONTACT BOOK APP", nullptr));
        SaveContactButton->setText(QCoreApplication::translate("AddContactWindow", "SAVE", nullptr));
        CancelAddContact->setText(QCoreApplication::translate("AddContactWindow", "CANCLE", nullptr));
        ClearButton->setText(QCoreApplication::translate("AddContactWindow", "CLEAR", nullptr));
        OperationHeading->setText(QCoreApplication::translate("AddContactWindow", "CREATE CONTACT", nullptr));
        FirstNameHeading->setText(QCoreApplication::translate("AddContactWindow", "First Name", nullptr));
        ContactNumberHeading->setText(QCoreApplication::translate("AddContactWindow", "Contact no", nullptr));
        HouseHeading->setText(QCoreApplication::translate("AddContactWindow", "House no.", nullptr));
        LastNameHeading->setText(QCoreApplication::translate("AddContactWindow", "Last Name", nullptr));
        EmailHeading->setText(QCoreApplication::translate("AddContactWindow", "Email", nullptr));
        StreetHeading->setText(QCoreApplication::translate("AddContactWindow", "Street no.", nullptr));
        CityHeading->setText(QCoreApplication::translate("AddContactWindow", "City", nullptr));
        CountryHeading->setText(QCoreApplication::translate("AddContactWindow", "Country", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddContactWindow: public Ui_AddContactWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONTACTWINDOW_H
