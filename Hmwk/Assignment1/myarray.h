#ifndef MYARRAY
#define MYARRAY

class MyArray{
public:
    /************Constructors and Desctructor************/

    //Default constructor
    MyArray();

    //Main constructor
    MyArray(int rows, int columns);

    //Destructor
    ~MyArray();

    /*Mutators and Accessors*/
    //Accesor functions

    //Precondition: An object of type Array has been declared.
    //Poscondition: Will return the contents of the object type Array in a c-string.
    char * toString();

private:
    int nRows;//Columns in the 2-D array
    int nCols;//Rows in the 2-D array
    int **array;//2-D array to hold 2 digit randomly generated numbers
};

#endif // MYARRAY

