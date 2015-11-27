/*
 * Author: Marlo Zeroth
 * Course: CSC17B
 * September 22, 2015
 * Assignment 2
 * This is the myarraybase.h file
 * This is the interface for MyArrayBase class
 */



#ifndef MYARRAYBASE_H
#define MYARRAYBASE_H

#include <myarrayabstract.h>

class MyArrayBase : public MyArrayAbstract{
public:
    // Default constructor
    MyArrayBase();

    // Main constructor
    MyArrayBase(int rows, int columns);

    // Base destructor
    virtual ~MyArrayBase();

    /*********** Mutators Functions ************/

    // Precondition: The random number generator has been seeded using time().
    // Postcondition: Fills the array with randomly generated 2 digit numbers
    virtual void fillArray();

    /*********** Accessor Functions ***********/

    // Precondition: An object has been declased with one of the constructors.
    // Postcondition: Returns a two dimensional array.
    int ** getArray();

    // Returns the number of rows
    int getRows() {return nRows;}

    // Returns the number of columns
    int getColumns(){return nCols;}

    // Postcondition: Returns a c-string formatted into rows and columns using
    // newlines every 10 elements.
    virtual char * toString();

private:
    int nRows;//Columns in the 2-D array
    int nCols;//Rows in the 2-D array
    int **array;//2-D array to hold 2 digit randomly generated numbers

};

#endif // MYARRAYBASE_H

