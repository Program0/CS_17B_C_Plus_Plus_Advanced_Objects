#include <QApplication>
#include <QLabel>
#include <iostream>
#include <cstdlib>
#include <myarray.h>

int main(int argc, char *argv[])
{
    using namespace std;

    //Declare object of MyArray. Could also use default constructor.
    MyArray anarray(10,10);

    QApplication a(argc, argv);
    QLabel *label = new QLabel(anarray.toString());
    //Output the label
    label->show();    

    return a.exec();
}

