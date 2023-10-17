#include <stdio.h>

int fibonacci( int number ); // function prototype

int main( void )
{
    int number; // integer number

    printf("%s", "Please enter how many terms you'd like to print: ");
    scanf("%llu", &number);
    fibonacci(number);

    
    return 0;
} // exit main

// fibonacci prints out the fibonacci sequence depending on how many given.
int fibonacci( int number )
{
    int fib = 0; // initialize fib as 0
    int fib2 = 1; // initailize fib as 1
    int temp;

    for ( int i = 0; i < number; i++ )
    {
        if ( i == 0 )
        {
            printf("%d ", fib);
        }

        else if ( i == 1 )
        {
            printf("%d ", fib2);
        }

        else
        {
            printf("%d ", fib + fib2);
            temp = fib + fib2;
            fib = fib2;
            fib2 = temp;

        }
    }
}
