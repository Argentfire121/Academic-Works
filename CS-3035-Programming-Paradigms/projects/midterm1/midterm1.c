// This file serves to demonstrate the increment function.
// Dexter kale - CS-3035 - section 5
// needs to be call by reference, ie pointers

#include <stdio.h>

int increment(int x);

int main( void ) {

    int x = 10; // initialize x
    int *ptrX;  // declare pointer
    ptrX = &x;  // assign pointer to x

    printf("Initial value: %d\n", *ptrX);
    printf("Incremented:   %d\n", increment(*ptrX));

}   // end of main

int increment(int x) {
    
    return x+1;

}   // end of increment
