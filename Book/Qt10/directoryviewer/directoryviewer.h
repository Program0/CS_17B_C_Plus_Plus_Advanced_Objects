#ifndef DIRECTORYVIEWER_H
#define DIRECTORYVIEWER_H

#include <QDialog>
#include <QDialogButtonBox>
#include <QDirModel>
#include <QTreeView>
#include <QHeaderView>
#include <QInputDialog>
#include <QVBoxLayout>
#include <qmessagebox.h>
#include <QPushButton>

class DirectoryViewer : public QDialog
{
    Q_OBJECT

public:
    DirectoryViewer(QWidget *parent = 0);

private slots:
    void createDirectory();
    void remove();

private:
    QTreeView *treeView;
    QDirModel *model;
    QDialogButtonBox *buttonBox;
};

#endif
