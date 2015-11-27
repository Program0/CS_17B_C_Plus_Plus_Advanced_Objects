/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *userHorizontalLayout;
    QLabel *userLabel;
    QLineEdit *userLine;
    QPushButton *okButton;
    QHBoxLayout *passwoardHorizontalLayout;
    QLabel *passwordLabel;
    QLineEdit *passwordLine;
    QPushButton *cancelButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *loginWindow)
    {
        if (loginWindow->objectName().isEmpty())
            loginWindow->setObjectName(QStringLiteral("loginWindow"));
        loginWindow->resize(308, 134);
        centralWidget = new QWidget(loginWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 301, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        userHorizontalLayout = new QHBoxLayout();
        userHorizontalLayout->setSpacing(6);
        userHorizontalLayout->setObjectName(QStringLiteral("userHorizontalLayout"));
        userLabel = new QLabel(verticalLayoutWidget);
        userLabel->setObjectName(QStringLiteral("userLabel"));

        userHorizontalLayout->addWidget(userLabel);

        userLine = new QLineEdit(verticalLayoutWidget);
        userLine->setObjectName(QStringLiteral("userLine"));

        userHorizontalLayout->addWidget(userLine);

        okButton = new QPushButton(verticalLayoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setEnabled(false);

        userHorizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(userHorizontalLayout);

        passwoardHorizontalLayout = new QHBoxLayout();
        passwoardHorizontalLayout->setSpacing(6);
        passwoardHorizontalLayout->setObjectName(QStringLiteral("passwoardHorizontalLayout"));
        passwordLabel = new QLabel(verticalLayoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        passwoardHorizontalLayout->addWidget(passwordLabel);

        passwordLine = new QLineEdit(verticalLayoutWidget);
        passwordLine->setObjectName(QStringLiteral("passwordLine"));

        passwoardHorizontalLayout->addWidget(passwordLine);

        cancelButton = new QPushButton(verticalLayoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setEnabled(true);

        passwoardHorizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(passwoardHorizontalLayout);

        loginWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(loginWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        loginWindow->setStatusBar(statusBar);

        retranslateUi(loginWindow);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(loginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *loginWindow)
    {
        loginWindow->setWindowTitle(QApplication::translate("loginWindow", "Login", 0));
        userLabel->setText(QApplication::translate("loginWindow", "\"&User Name: \"", 0));
        okButton->setText(QApplication::translate("loginWindow", "OK", 0));
        passwordLabel->setText(QApplication::translate("loginWindow", "\"&Password:\"", 0));
        cancelButton->setText(QApplication::translate("loginWindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class loginWindow: public Ui_loginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
