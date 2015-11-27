#include <QApplication>
#include <QLabel>
#include <iostream>
#include <cstdlib>
#include <myarrayabstract.h>
#include <myarraybase.h>
#include <myarrayderived.h>
#include <ctime>

int main(int argc, char *argv[])
{
    using namespace std;

    //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));

    //Declare object of MyArray. Could also use default constructor.
    int rows = 10;
    int columns = 10;
    MyArrayBase anArray(rows,columns);
    anArray.fillArray();
    int ** anotherArray;
    anotherArray = anArray.getArray();

    cout<< " Testing: "<< endl;
    int showPerLine = 10;
    for(int i =0; i < rows; i++){
        for(int j=0; j<columns;j++){
            cout<<anotherArray[i][j]<< " ";
            if(j%showPerLine==(showPerLine-1)){
                cout<<"\n";
            }
        }
    }

    cout<< "Testing the fillArray() and toString() methods in base and derived array classes "
        << endl;
    // Testing base and derived classes. No polymorphism.

    MyArrayBase anyArray(rows, columns);
    MyArrayDerived floatArray(rows, columns);

    anyArray.fillArray();
    floatArray.fillArray();

    char * intString;
    char * floatString;

    intString = anyArray.toString();
    floatString = floatArray.toString();
    cout << "Outputting an int array"<<endl;
    cout<< intString << endl;
    cout << "Outputting an float array"<<endl;
    cout<< floatString<< endl;

    cout<<"Testing polymorphism."<<endl;
\
    // Testing polymorphism with base and derived class.
    MyArrayBase *myIntArray = new MyArrayBase(rows, columns);
    MyArrayBase *myFloatArray = new MyArrayDerived(rows, columns);

    cout<<"Testing toString() with base class and polymorphism"<<endl;
    myIntArray->fillArray();
    myFloatArray->fillArray();
    cout<<"\nFor the base class: "<<endl;
    cout<<myIntArray->toString();
    cout<<"\nFor the derived class: "<<endl;
    cout<<myFloatArray->toString();

    cout<< "\nTesting the toPrint() method in derived class using a QLabel and HTML\n" << endl;


    QApplication a(argc, argv);
    QLabel *label = new QLabel(floatArray.toPrint());

    //Output the label
    label->show();

    return a.exec();

    // For testing with console only
    //return 0;

}
