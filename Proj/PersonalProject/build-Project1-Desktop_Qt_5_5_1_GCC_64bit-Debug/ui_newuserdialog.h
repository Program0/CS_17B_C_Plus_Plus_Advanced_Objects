/********************************************************************************
** Form generated from reading UI file 'newuserdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSERDIALOG_H
#define UI_NEWUSERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewUserDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *middleNameLabel;
    QLineEdit *middleNameEdit;
    QVBoxLayout *verticalLayout;
    QLabel *firstNameLabel;
    QLineEdit *firstNameEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *lastNameLabel;
    QLineEdit *lastNameEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *passwordLabel;
    QLineEdit *passwordEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *userLabel;
    QLineEdit *userNameEdit;
    QVBoxLayout *verticalLayout_6;
    QLabel *emailLabel;
    QLineEdit *emailEdit;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *NewUserDialog)
    {
        if (NewUserDialog->objectName().isEmpty())
            NewUserDialog->setObjectName(QStringLiteral("NewUserDialog"));
        NewUserDialog->resize(552, 200);
        gridLayoutWidget = new QWidget(NewUserDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 531, 170));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        middleNameLabel = new QLabel(gridLayoutWidget);
        middleNameLabel->setObjectName(QStringLiteral("middleNameLabel"));
        middleNameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(middleNameLabel);

        middleNameEdit = new QLineEdit(gridLayoutWidget);
        middleNameEdit->setObjectName(QStringLiteral("middleNameEdit"));

        verticalLayout_2->addWidget(middleNameEdit);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        firstNameLabel = new QLabel(gridLayoutWidget);
        firstNameLabel->setObjectName(QStringLiteral("firstNameLabel"));
        firstNameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(firstNameLabel);

        firstNameEdit = new QLineEdit(gridLayoutWidget);
        firstNameEdit->setObjectName(QStringLiteral("firstNameEdit"));

        verticalLayout->addWidget(firstNameEdit);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lastNameLabel = new QLabel(gridLayoutWidget);
        lastNameLabel->setObjectName(QStringLiteral("lastNameLabel"));
        lastNameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(lastNameLabel);

        lastNameEdit = new QLineEdit(gridLayoutWidget);
        lastNameEdit->setObjectName(QStringLiteral("lastNameEdit"));

        verticalLayout_3->addWidget(lastNameEdit);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        passwordLabel = new QLabel(gridLayoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        verticalLayout_5->addWidget(passwordLabel);

        passwordEdit = new QLineEdit(gridLayoutWidget);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));

        verticalLayout_5->addWidget(passwordEdit);


        gridLayout->addLayout(verticalLayout_5, 1, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        userLabel = new QLabel(gridLayoutWidget);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setAutoFillBackground(false);
        userLabel->setFrameShape(QFrame::NoFrame);

        verticalLayout_4->addWidget(userLabel);

        userNameEdit = new QLineEdit(gridLayoutWidget);
        userNameEdit->setObjectName(QStringLiteral("userNameEdit"));

        verticalLayout_4->addWidget(userNameEdit);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        emailLabel = new QLabel(gridLayoutWidget);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        verticalLayout_6->addWidget(emailLabel);

        emailEdit = new QLineEdit(gridLayoutWidget);
        emailEdit->setObjectName(QStringLiteral("emailEdit"));

        verticalLayout_6->addWidget(emailEdit);


        gridLayout->addLayout(verticalLayout_6, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 2, 1, 1);

        label = new QLabel(NewUserDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 180, 101, 17));
#ifndef QT_NO_SHORTCUT
        middleNameLabel->setBuddy(middleNameEdit);
        firstNameLabel->setBuddy(firstNameLabel);
        lastNameLabel->setBuddy(lastNameEdit);
        passwordLabel->setBuddy(passwordEdit);
        userLabel->setBuddy(userNameEdit);
        emailLabel->setBuddy(emailEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(NewUserDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewUserDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewUserDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewUserDialog);
    } // setupUi

    void retranslateUi(QDialog *NewUserDialog)
    {
        NewUserDialog->setWindowTitle(QApplication::translate("NewUserDialog", "New User", 0));
        middleNameLabel->setText(QApplication::translate("NewUserDialog", "Middle Name:", 0));
        firstNameLabel->setText(QApplication::translate("NewUserDialog", "First Name:", 0));
        lastNameLabel->setText(QApplication::translate("NewUserDialog", "Last Name:", 0));
        passwordLabel->setText(QApplication::translate("NewUserDialog", "*Password", 0));
        userLabel->setText(QApplication::translate("NewUserDialog", "*User Name:", 0));
        emailLabel->setText(QApplication::translate("NewUserDialog", "*Email:", 0));
        label->setText(QApplication::translate("NewUserDialog", "*Required Field", 0));
    } // retranslateUi

};

namespace Ui {
    class NewUserDialog: public Ui_NewUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSERDIALOG_H
