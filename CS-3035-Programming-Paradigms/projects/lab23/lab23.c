#include <stdio.h>

int mul( int num1, int num2) {
    return num1*num2;
}

int add(int num1, int (*f)(int, int)) {
    return num1 + (*f);
}

int calculator( int num1, int num2, int (*f1)(int, int (*f3)(int, int)), int (*f2)(int, int) ) {
    return (*f1)(num1, (*f2)(num1, num2));
} // end of calculator

int main( void ) {

    printf("%d\n", calculator(10, 20, add, mul));
    
    return 0;
} // end of main
