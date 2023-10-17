#include <stdio.h>

int main( void ) 
{
	int counter;
	int largest;
	int number;

    counter = 1;
    largest = 0;
    number = 0;

    while ( counter <= 10)
    {
        printf( "%s", "Enter in a number.\n" );
        scanf( "%d", &number);

        if ( number > largest)
        {
            largest = number;
        } // end if
	
	counter++;
    } // end while
    
    printf("%d is the largest value given.\n", largest);
    return 0;
} 
