/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *userNameLabel;
    QLineEdit *userLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *passwordLabel;
    QPushButton *loginPushButton;
    QPushButton *cancelPushButton;
    QCheckBox *checkBox;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(366, 112);
        userNameLabel = new QLabel(LoginDialog);
        userNameLabel->setObjectName(QStringLiteral("userNameLabel"));
        userNameLabel->setGeometry(QRect(10, 10, 66, 27));
        userLineEdit = new QLineEdit(LoginDialog);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setGeometry(QRect(80, 10, 184, 27));
        passwordLineEdit = new QLineEdit(LoginDialog);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(80, 40, 181, 27));
        passwordLabel = new QLabel(LoginDialog);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setGeometry(QRect(10, 40, 61, 27));
        loginPushButton = new QPushButton(LoginDialog);
        loginPushButton->setObjectName(QStringLiteral("loginPushButton"));
        loginPushButton->setGeometry(QRect(280, 10, 71, 26));
        cancelPushButton = new QPushButton(LoginDialog);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(280, 40, 71, 26));
        checkBox = new QCheckBox(LoginDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 80, 121, 22));
        checkBox->setLayoutDirection(Qt::RightToLeft);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", 0));
        userNameLabel->setText(QApplication::translate("LoginDialog", "User Name", 0));
        passwordLabel->setText(QApplication::translate("LoginDialog", "Password", 0));
        loginPushButton->setText(QApplication::translate("LoginDialog", "Login", 0));
        cancelPushButton->setText(QApplication::translate("LoginDialog", "Cancel", 0));
        checkBox->setText(QApplication::translate("LoginDialog", "Remember me?", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
