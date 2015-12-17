/*
 * Author: Marlo Zeroth
 * doublyList.h
 *
 * Implements a template doubly linked list data structure. Allows duplicates,
 * insertion at front, back, and any point in the list. The list is not ordered.
 * Created on: Nov 4, 2015
 *
 */


#ifndef QUEUE_H
#define	QUEUE_H

#include <new>

#include "invalidargument.h"
#include "empty.h"

template<class T>
class Queue {
private:
    // Internal struct class to hold data and point to other nodes

    struct Node {
        T data;
        Node *next;
        Node *previous;
    };

    /*Utility functions*/
    void memError() const;
    // Handles memory allocation errors

    void append(const T& input);
    // Appends an entry to the back of the queue. Helps with copy
    // constructor and assignment operator to maintain the items in
    // the correct order.

    // Returns the position of an entry in the list
    typename Queue<T>::iterator position(const T& entry) const;

    /* OList Member variables */
    Node *head; // Reference to first/head node
    Node *tail; // Reference to last/tail node
    unsigned int size;

public:

    // iterator class for traversing the list

    class iterator {
    public:
        friend class Queue;
        // Default constructor. Allows .
        iterator();

        // Copy constructor
        //OListiterator(const iterator & obj);

        // Destructor
        //~OListiterator();

        /*Overloaded operators*/

        // Assignment operator
        //iterator& operator = (const OListiterator& obj);

        // Prefix increment operator
        iterator& operator++();

        // Postfix increment operator
        iterator operator++(int);

        // Dereference operator
        T& operator*();

        // Returns the addres of the value referred to
        T* operator->();

        // Comparison operator
        bool operator==(const iterator &obj) const;

        // Comparison operator
        bool operator!=(const iterator &obj) const;

    private:
        iterator(Node *pter);
        Node *position;
    };


    // Default constructor
    Queue();

    // Main constructor
    Queue(const T &entry);

    // Copy constructor
    Queue(const Queue<T> &obj);

    // Destructor
    ~Queue();

    // Overloaded Operators

    // Oveloaded = operator
    Queue<T>& operator=(const Queue<T> &obj);

    /* Mutators and Accessors */


    void enqueue(const T& entry);
    // Adds an entry to the front of the queue

    T& dequeue();
    // Removes and returns the back entry from the queue

    void clear();
    // Removes all items for the list

    T& front() throw (Empty);
    // Returns the first element in the list

    T& back() throw (Empty);
    // Returns the last element in the list

    bool contains(const T& entry);
    // Returns whether the queue contains the passed entry.

    unsigned int length() const {
        return size;
    }
    // Returns the size of the queue

    bool isEmpty();
    // Returns whether the queue is empty

    iterator begin();
    // Returns a pointer to the beginning of the list.

    iterator begin() const;
    // Returns a pointer to the beginning of the list.

    iterator end();
    // Returns a a null iterator to signify the end of the list.

    iterator end() const;
    // Returns a const null iterator to signify the end of the list.

};

/*Constructors and Destructor Definitions */

// Default constructor

template<class T>
Queue<T>::Queue() {
    tail = NULL;
    head = NULL;
    size = 0;
}

//****************************************************************
// Main constructor. Adds an entry and increments the size by 1. *
//****************************************************************

template<class T>
Queue<T>::Queue(const T &entry) {

    // Create new node with entry parameter
    Node *link;
    // Attempt to allocate memory
    try {
        link = new Node;

    } catch (const std::bad_alloc&) {
        memError();
    }
    // Set its data member and pointers
    link->data = entry;
    link->next = NULL;
    link->previous = NULL;

    // Now point the head and tail to this new link in the list
    head = tail = link;
    size++;

}

// Copy constructor. This is order O(N).

template<class T>
Queue<T>::Queue(const Queue<T> &obj) {
    std::cout << "copy constructor" << std::endl;

    // Set the head and tail pointers to null.
    tail = head = NULL;

    // Set the size of the list
    size = 0;

    // Now set the cursor to the object's head and
    // traverse the links in obj if there are any.
    Node *cursor; // For navigating through the obj list
    for (cursor = obj.head; cursor != 0; cursor = cursor->next) {
        append(cursor->data);
    }
}

// Destructor

template<class T>
Queue<T>::~Queue() {
    // Traverse the list deleting each link
    while (head) {
        // Set the cursor to the current head
        Node *cursor = head;
        // Set the head pointer to the next link
        head = head->next;
        // Deallocate the current link
        delete cursor;
    }
    tail = NULL;
}


/*Overloaded operators*/

// Overload = operator declaration

template<class T>
Queue<T>& Queue<T>::operator=(const Queue<T> &obj) {

    std::cout << "= operator " << std::endl;
    // Test to make sure the passed object is not the same
    // as calling object e.g. input = input
    if (this != &obj) {
        clear();
        // Set the size of the list
        size = 0;

        // Now set the cursor to the object's head and
        // traverse the links in obj if there are any.
        Node *cursor; // For navigating through the obj list
        for (cursor = obj.head; cursor != 0; cursor = cursor->next) {
            append(cursor->data);
        }
    }
    // Just return a reference
    return *this;
}

/*Mutators and accessors*/


//****************************************************************
// enqueue Function. Adds a element at the beginning of the list *
//****************************************************************

template<class T>
void Queue<T>::enqueue(const T& input) {
    // Create a new node for the input.
    Node *link;

    // Allocate memory
    try {
        link = new Node;

    } catch (const std::bad_alloc&) {
        memError();
    }

    // Set its data element.
    link->data = input;

    // If the list is empty, add the new link and point head and tail to it
    if (!head) {
        // Set the link's next and previous to null as this is the only link
        link->next = NULL;
        link->previous = NULL;
        // Now point the head and tail to the new link
        tail = head = link;
        size++;

    } else {
        // Since it will be at the beginning, it should
        // point to the current first link in the list.
        link->next = head;
        link->previous = NULL;
        // Now set the previous pointer in the existing first link
        // to the new link.
        head->previous = link;
        // Set the new head.
        head = link;
        size++;
    }
}

//*********************************************************
// dequeue function. Removes and returns the back element *
// in the queue if the queue is not empty. Throws anEmpty *
// exception if the queue is empty.                       *
//*********************************************************
template<class T>
T& Queue<T>::dequeue(){
    if(tail){
        // Get the data
        T *returnValue = new T;
        *returnValue = tail->data;

        Node *cursor = tail; // To deallocate later

        // Set top to be the next node.
        tail = tail->previous;

        // Deallocate memory and decrease the size
        delete cursor;
        --size;
        // Return the data
        return *returnValue;
    } else{
        throw Empty();
    }
}


//*********************************************************
// front function. Returns the front element in the queue *
//*********************************************************

template<class T>
T& Queue<T>::front() throw (Empty) {
    if (head) {
        return head->data;
    } else {
        throw Empty();
    }

}

//*******************************************************
// back function. Returns the rear element in the queue *
//*******************************************************

template<class T>
T& Queue<T>::back() throw (Empty) {
    if (tail) {
        return tail->data;
    } else {
        throw Empty();
    }
}

//*******************************************************************
// begin function. Returns an iterator to the beginning of the list *
//*******************************************************************

template<class T>
typename Queue<T>::iterator Queue<T>::begin() {
    // Create an iterator and set its
    // position to the head.
    return iterator(head);
}

//*******************************************************************
// begin function. Returns an iterator to the beginning of the list *
//*******************************************************************

template<class T>
typename Queue<T>::iterator Queue<T>::begin() const {
    // Create an iterator and set its
    // position to the head.
    return iterator(head);
}

//***********************************************************
// end function. Returns an iterator to the end of the list *
//***********************************************************

template<class T>
typename Queue<T>::iterator Queue<T>::end() {
    // Create an iterator and set its position to the
    // tail.
    return iterator(NULL);
}

//***********************************************************
// end function. Returns an iterator to the end of the list *
//***********************************************************

template<class T>
typename Queue<T>::iterator Queue<T>::end() const {
    // Create an iterator and set its position to the
    // tail.
    return iterator(NULL);
}

//****************************************************************
// contains function. Returns true if entry is in the list and   *
// moves the found link to the head/front of the list. Otherwise *
// returns false.                                                *
//****************************************************************

template<class T>
bool Queue<T>::contains(const T& entry) {
    Node *cursor = head;
    bool found = false;
    // Go through the list until we reach the end
    // or find the entry
    while (!found && cursor != 0) {
        if (cursor->data == entry) {
            if (cursor->next == NULL && cursor->previous != NULL) {
                // The previous link before the cursor is now
                // the last link
                cursor->previous = cursor->next;
                // Now we set the entry at the beginning
                cursor->next = head;
                head->previous = cursor;
                head = cursor;
            } else if (cursor->next != NULL && cursor->previous != NULL) {
                // Link the nodes next to cursor together
                Node before = cursor->previous;
                Node after = cursor->next;
                before->next = cursor->next;
                after->previous = cursor->previous;

                // Now set the cursor at the front
                cursor->previous = NULL;
                cursor->next = head;
                head->previous = cursor;
                head = cursor;
            }
            found = true;
        }
        cursor = cursor->next;
    }
    return found;

}

//***************************************************************************
// clear function. Deallocates each link in the list and sets the size to 0 *
//***************************************************************************

template<class T>
void Queue<T>::clear() {
    Node *cursor;
    // Clear out the data in the existing list
    while (head) {
        // Set the cursor to the current head
        cursor = head;
        // Set the head pointer to the next link
        head = head->next;
        // Deallocate the current link
        delete cursor;
    }
    tail = NULL;
    size = 0;
}

/*iterator definitions*/

// Default constructor

template<class T>
Queue<T>::iterator::iterator() {
}

// Main constructor

template<class T>
Queue<T>::iterator::iterator(Node *ptr) {
    position = ptr;
}

/*Overloaded operators*/

// Tests for inequality with right hand side operator
template<class T>
bool Queue<T>::iterator::operator!=(const iterator &obj) const {
    return position != obj.position;
}

// Tests for equality with right hand side iterator
template<class T>
bool Queue<T>::iterator::operator==(const iterator &obj) const {
    return position == obj.position;
}

// Dereferences the pointer and returns value pointed by position

template<class T>
T& Queue<T>::iterator::operator*() {
    return position->data;
}

// For use with pointers
template<class T>
T* Queue<T>::iterator::operator->() {
    return (&*(Queue<T>::iterator) * this);
}


// Prefix increments the iterator to the next element

template<class T>
typename Queue<T>::iterator& Queue<T>::iterator::operator++() {
    position = position->next;
    return *this;
}


// Postfix increments the iterator to the next  element

template<class T>
typename Queue<T>::iterator Queue<T>::iterator::operator++(int) {
    iterator temp = *this;
    ++(*this);
    return temp;
}


/*Utility Functions*/

//*******************************************************
// memError function. Displays an error message and     *
// terminates the program when memory allocation fails. *
//*******************************************************

template<class T>
void Queue<T>::memError() const {
    std::cout << "ERROR:Cannot allocate memory.\n";
    exit(EXIT_FAILURE);
}

//***********************************************************
// append Function. Adds a element at the end of the queue. *
//***********************************************************

template<class T>
void Queue<T>::append(const T& input) {
    // Create a new node for the input.
    Node *link;

    // Allocate memory
    try {
        link = new Node;

    } catch (const std::bad_alloc&) {
        memError();
    }

    // Set its data element.
    link->data = input;

    // If the list is empty, add the new link and point head and tail to it
    if (!tail) {
        // Set the link's next and previous to null as this is the only link
        link->next = NULL;
        link->previous = NULL;
        // Now point the head and tail to the new link
        tail = head = link;
        size++;

    } else {
        // Since it will be at the end, it should
        // point to the current last link in the list.
        link->previous = tail;
        link->next = NULL;
        // Now set the next pointer in the existing last link
        // to the new link.
        tail->next = link;
        // Set the new tail.
        tail = link;
        size++;
    }
}

//****************************************************
// Returns the position of an entry in the queue.    *
// If the entry is not in the list, it returns null. *
//****************************************************

template<class T>
typename Queue<T>::iterator Queue<T>::position(const T& entry) const {
    iterator cursor(head);
    iterator finish(NULL);
    while (*cursor != entry && cursor != finish) {
        cursor++;
    }
    return cursor;
}

#endif	/* QUEUE_H */

