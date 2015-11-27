#include "mainwindow.h"
#include <QApplication>
#include <QMap>
#include <QSet>
#include <QVector>

QVector<int> mode(const int *, int);


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
