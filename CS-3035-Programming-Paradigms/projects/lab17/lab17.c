#include <stdio.h>

void printAddress(int *value);

int main ( void ) {
    
    int test = 10; // initialize test
    int *testPtr = &test;

    printf("Address from main:     %p\n", &test);
    printAddress(testPtr);

    return 0;
} // end of main

void printAddress(int *value) {

    printf("Address from function: %p\n", value);
}
