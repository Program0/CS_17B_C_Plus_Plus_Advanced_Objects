/*
 * Author: Marlo Zeroth
 * Course: CSC17B
 * September 22, 2015
 * Assignment 2
 * File: myarraybase.cpp
 * Base Class myarraybase inherits from Abstract Class myarrayabstract
 * This is the implementation for the MyArrayBase class
 */



#include <myarraybase.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>
#include <iostream>

// Default constructor
MyArrayBase::MyArrayBase(){
    nRows = 2;
    nCols =2;
    array = 0;
}


// Main constructor
MyArrayBase::MyArrayBase(int rows, int columns){
    // Handle cases where MyArrayBase is attempted to be intialized with a negative number
    try{
        // Error to throw
        int error = -1;
        // Catch the exception
        if(rows < 1 || columns < 1)
            throw error;

        nRows = rows;
        nCols = columns;
        array = 0; // Set array to point to 0. We will allocate memory with
    }
    // Handle the error
    catch(int error){
        std::cout << "Error you entered a number less than 1 for either row or colum: " << error << std::endl;

    }
}

// Destructor
MyArrayBase::~MyArrayBase(){
    // Check to see if array is not pointing to null.
    // (Memory has been allocated)
    if(array){
        //Deallocate the children first
        for(int i =0;i<nCols;i++){
            delete []array[i];
        }
        //Now deallocate the parent
        delete []array;
    }
}

// Precondition: The random number generator has been seeded using time().
// Postcondition: Fills the array with randomly generated 2 digit numbers
void MyArrayBase::fillArray(){

    //Check to see memory has already been allocated
    if(!array){
        //Allocate memory for the 2D array
        array = new int*[nRows];
        for(int i = 0; i<nCols; i++){
            array[i]= new int[nCols];
        }
        //Initialize the elements so we don't get garbage.
        for(int i = 0; i<nRows; i++){
            for(int j=0;j<nCols;j++){
                array[i][j]=0;
            }
        }
    }

    //Now we fill it with random 2 digit numbers
    for(int i = 0; i<nRows; i++){
        for(int j=0;j<nCols;j++){
            array[i][j]=rand()%90+10;
        }
    }
}

// Precondition: An object has been declared with one of the constructors.
// Postcondition: Returns a two dimensional array.
int ** MyArrayBase::getArray(){

    // Check to make sure
    if(nRows>0 && nCols > 0){
        // Allocate memory
        int ** temp;
        temp = new int *[nRows];
        for(int i = 0; i < nRows ; i++){
            temp[i]= new int [ nCols];
        }

        // Copy each element
        for(int i = 0; i<nRows; i++){
            for(int j=0;j<nCols;j++){
                temp[i][j]= array[i][j];
            }
        }
        // Return the copy
        return temp;
    }
    else{
        return NULL;
    }

}


char* MyArrayBase::toString(){
    //using namespace std;
    int showPerLine = 10;
    std::stringstream s;
    std::string outputString;
    if(array){
    for(int i = 0; i<nRows;i++){
        for(int j=0; j<nCols;j++){
            s<<array[i][j] << " ";
            if(j%showPerLine==(showPerLine-1)){
                s<<"\n";
            }
        }
    }
    }
    else{
        s<<"Array is empty. Call fillArray() to fill it.";
    }
    outputString = s.str();
    char *outCString = new char[outputString.size()+1];
    for(unsigned int i = 0; i < outputString.size(); i++){
        outCString[i]=outputString[i];
    }
    outCString[outputString.size()]='\0';
    return outCString;
}
