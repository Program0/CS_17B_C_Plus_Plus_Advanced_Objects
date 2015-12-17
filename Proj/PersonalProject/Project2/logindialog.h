#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QRegularExpression> // For testing regular expressions
//#include <QRegExpValidator>
#include <QRegularExpressionValidator>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QDialogButtonBox>
#include <QGridLayout>

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    //~LoginDialog();

private slots:
    //void checkUserPassword();

signals:
    void acceptLogin(QString& username, QString& password, unsigned int& indexNumber);

public slots:
    void slotAcceptLogin(bool);

private:
    QLabel *passwordLabel;
    QLabel *userLabel;
    QLineEdit *userNameLine;
    QLineEdit *passwordLine;
    QCheckBox *rememberCheckBox;
    QDialogButtonBox *buttonBox;

};

#endif // LOGINDIALOG_H
