#ifndef NEWUSERDIALOG_H
#define NEWUSERDIALOG_H

#include <QDialog>

#include "ui_newuserdialog.h"


class NewUserDialog : public QDialog, public Ui::NewUserDialog
{
    Q_OBJECT

public:
    explicit NewUserDialog(QWidget *parent = 0);
};

#endif // NEWUSERDIALOG_H
