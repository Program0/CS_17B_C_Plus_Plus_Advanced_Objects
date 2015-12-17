
#include <QApplication>

#include <QDebug>

//#include "playspace.h"
#include "mainwindow.h"
//#include "logindialog.h"
//#include "newuserdialog.h"
//#include "computer.h"

int main(int argc, char *argv[])
{


    QApplication a(argc,argv);

    /*
    QString image1(":/images/bull-icon.png");
    QString image2(":/images/cow-icon.png");
    QPixmap bull(image1);
    QPixmap cow(image2);

    bull.scaled(QSize(40,40),Qt::KeepAspectRatioByExpanding,Qt::FastTransformation);
    cow.scaled(QSize(40,40),Qt::KeepAspectRatioByExpanding,Qt::FastTransformation);
    unsigned int size=8;

    qsrand(QTime::currentTime().msec());

    QMap<QString,QString> map;

    QFile file(":/text/code_options.txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        std::cerr<<"Cannot open file for reading "
                <<qPrintable(file.errorString())<<std::endl;

    QTextStream in(&file);
    while(!in.atEnd()){
       QString line = in.readLine();
       QStringList iconList;
       iconList=line.split("\t");
       std::cerr<<"Size of list "<<iconList.size()<<std::endl;
       QString iconValue = iconList.takeFirst();
       QString iconImage = QString(":/images/"+iconList.takeFirst());
       map.insert(iconValue,iconImage);
    }

    //PlaySpace w(map,size);
    //w.show();

    */
    MainWindow mainWin;
    mainWin.show();

    return a.exec();
}
