#include <myarray.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>

MyArray::MyArray(){
    nRows = 2;
    nCols =2;
    //Allocate memory for the 2D array
    array = new int*[nRows];
    for(int i = 0; i<nCols; i++){
        array[i]= new int[nCols];
    }

    //Now we fill it with random 2 digit numbers
    for(int i = 0; i<nRows; i++){
        for(int j=0;j<nCols;j++){
            array[i][j]=rand()%90+10;
        }
    }
}

MyArray::MyArray(int rows, int columns){
    nRows = rows;
    nCols = columns;

    //Allocate memory for the 2D array
    array = new int*[nRows];
    for(int i = 0; i<nCols; i++){
        array[i]= new int[nCols];
    }

    //Now we fill it with random 2 digit numbers
    for(int i = 0; i<nRows; i++){
        for(int j=0;j<nCols;j++){
            array[i][j]=rand()%90+10;
        }
    }
}

MyArray::~MyArray(){
    //Deallocate the children first
    for(int i =0;i<nCols;i++){
        delete []array[i];
    }
    //Now deallocate the parent
    delete []array;
}

char* MyArray::toString(){
    //using namespace std;
    int showPerLine = 10;
    std::stringstream s;
    std::string outputString;
    for(int i = 0; i<nRows;i++){
        for(int j=0; j<nCols;j++){
            s<<array[i][j] << " ";
            if(j%showPerLine==(showPerLine-1)){
                s<<"\n";
            }
        }
    }
    outputString = s.str();
    char *outCString = new char[outputString.size()+1];
    for(unsigned int i = 0; i < outputString.size(); i++){
        outCString[i]=outputString[i];
    }
    outCString[outputString.size()]='\0';
    return outCString;
}
