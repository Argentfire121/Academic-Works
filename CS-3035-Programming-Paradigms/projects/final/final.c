#include <stdio.h>

int add(int a, int b);
int mul(int c, int d);

int add(int a, int b) {
    return a+b;
}   // end mul

int mul(int c, int d) {
    return c*d;
}   // end add

int solverFunction(int a, int b, int c, int d, int(*add)(int, int), int(*mul)(int, int)){
    return mul(add(a,b), add(c,d));
}   // end solverFunction
    
int main(void) {
    
    int a = 5; // initialize a, b, c, d
    int b = 10; 
    int c = 15; 
    int d = 20; 

    int output = solverFunction(a, b, c ,d, add, mul);
    printf("%d\n", output);
    
    return 0;
}   // end main
