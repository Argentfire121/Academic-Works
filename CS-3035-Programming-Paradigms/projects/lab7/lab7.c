#include <stdio.h>

int fibonacci( int term );

int main( void ) {
    
    int num; // declares num
    int answer; // declares answer

    printf("%s", "Please input number of terms: ");
    scanf("%d", &num);

    answer = fibonacci(--num);
    printf("%d\n", answer);

    return 0;
} // end main

int fibonacci( int term ) {
    
    if (term == 0) {
        return term;
    }

    else if (term == 1) {
        return term;
    }
    
    else {
        return fibonacci(term - 1) + fibonacci(term - 2);
    }
} // end fib
