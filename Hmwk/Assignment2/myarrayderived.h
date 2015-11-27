/*
 * Author: Marlo Zeroth
 * Course: CSC17B
 * September 22, 2015
 * Assignment 2
 * This is the myarrayderived.h file
 * This is the interface for MyArrayDerived class
 * It inherits from the base class MyArrayBase
 */

#ifndef MYARRAYDERIVED_H
#define MYARRAYDERIVED_H

#include <myarraybase.h>

class MyArrayDerived : public MyArrayBase {
public:

    // Default constructor.
    MyArrayDerived();

    // Main constructor
    MyArrayDerived(int rows, int columns);

    // Destructor
    virtual ~MyArrayDerived();

    // Overrides base class fillArray() method.
    virtual void fillArray();

    // Overrides base class toString() method.
    virtual char * toString();

    // Returns an HTML formatted c-string
    virtual char * toPrint();

private:
    // 2-Dimensional array for floats
    float ** floatArray;
};

#endif // MYARRAYDERIVED_H

