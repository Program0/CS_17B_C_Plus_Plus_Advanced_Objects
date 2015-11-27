
/*
 * Author: Marlo Zeroth
 * Course: CSC17B
 * September 22, 2015
 * Assignment 2
 * This is the myarrayderived.cpp file
 * This is the implementation file for MyArrayDerived class
 */

#include <myarrayderived.h>
#include <cstdlib>
#include <string>
#include <ctime>
#include <sstream>
#include <iostream>

// Default constructor
MyArrayDerived::MyArrayDerived() : MyArrayBase(){
    // Set pointer to null
    floatArray=0;
}

// Main constructor
// Calls the base class constructor to initialize rows and columns
MyArrayDerived::MyArrayDerived(int rows, int columns) : MyArrayBase(rows,columns){
    // Set pointer to null
    floatArray=0;
}

//Destructor
MyArrayDerived::~MyArrayDerived(){
    // Check to see if memory was allocated
    if(floatArray){
        // Get the rows and columns from base class
        // int rows = MyArrayBase::getRows();

        // Deallocate the children
        int columns = MyArrayBase::getColumns();
        for(int i = 0; i<columns; i++){
            delete [] floatArray[i];
        }
        // Deallocate the parent
        delete [] floatArray;
    }
}

// Overrides base class MyArrayBase::fillArray() method
// Precondition: The number of rows and columns has been set greater than 0
// Postcondition: The internal array will be filled with random numbers of type float
void MyArrayDerived::fillArray(){
    // Get the rows and columns from base class
    int rows = MyArrayBase::getRows();
    int columns = MyArrayBase::getColumns();

    //Check to see memory has already been allocated
    if(!floatArray){
        //Allocate memory for the 2D array

        floatArray = new float *[rows];
        for(int i = 0; i<columns; i++){
            floatArray[i]= new float [columns];
        }
        //Initialize the elements so we don't get garbage.
        for(int i = 0; i<rows; i++){
            for(int j=0;j<columns;j++){
                floatArray[i][j]=0.0;
            }
        }
    }

    //Now we fill it with random float numbers
    for(int i = 0; i<rows; i++){
        for(int j=0;j<columns;j++){
            // Get a random number between 10.0 and 90.9
            floatArray[i][j]=static_cast<float>(rand()%90+10)/100.0 + static_cast<float>(rand()%90+10);
        }
    }

}

// Overrides base class MyArrayBase::toStringArray() method
// Precondition: The internal array has been filled.
// Postcondition: Returns a c string based on contents of the internal array
// if the array was filled. Otherwise returns an error message.
char * MyArrayDerived::toString(){
    //using namespace std;
    int showPerLine = 10;
    int rows;
    int columns;
    rows = MyArrayBase::getRows();
    columns = MyArrayBase::getColumns();

    // For string manipulation before placing the
    // result in a c-string
    std::stringstream s;
    std::string outputString;

    // Check to see if there is anything in array.
    // If there is push into a string stream
    if(floatArray){
        for(int i = 0; i<rows;i++){
            for(int j=0; j<columns;j++){
                s<<floatArray[i][j] << " ";
                if(j%showPerLine==(showPerLine-1)){
                    s<<"\n";
                }
            }
      }
    }
    else{
        s<<"No data. Call fillArray() to populate.";
    }
    outputString = s.str();
    char *outCString = new char[outputString.size()+1];
    for(unsigned int i = 0; i < outputString.size(); i++){
        outCString[i]=outputString[i];
    }
    outCString[outputString.size()]='\0';
    return outCString;

}

// Precondition: The internal array has been filled.
// Postcondition: Returns a c string based on contents of the internal array
// Postcondition: Returns an HTML formatted strings as a table if the internal
// array was filled. Otherwise returns an error message.
// Note: A better option may be throw an exception.
char* MyArrayDerived::toPrint(){
    int showPerLine = 10;
    int rows;
    int columns;
    rows = MyArrayBase::getRows();
    columns = MyArrayBase::getColumns();
    std::stringstream s;
    std::string outputString;
    // Check to make sure we are pointing at something.
    // (We allocated memory)
    if(floatArray){
        s<<"<table cellspacing=\"10\" border=\"1\" style=\"width:100%\">";
        for(int i = 0; i<rows;i++){
            s<<"<tr>";
            for(int j=0; j<columns;j++){
             s<<"<td>"<<floatArray[i][j] << "</td>";
                if(j%showPerLine==(showPerLine-1)){
                s<<"\n";
                }
            }
            s<<"</tr>";
        }
        s<<"</table>";
    }
    else{
        s<<"<p>No data. Call fillArray() to populate.</p>";
    }
    outputString = s.str();
    char *outCString = new char[outputString.size()+1];
    for(unsigned int i = 0; i < outputString.size(); i++){
        outCString[i]=outputString[i];
    }
    outCString[outputString.size()]='\0';
    return outCString;
}



