#include <stdio.h>

int main( void ) 
{
	int counter;
	int largest;
	int secondLargest;
	int number;

    counter = 1;
    largest = 0;
    secondLargest = 0;
    number = 0;

    while ( counter <= 10)
    {
        printf( "%s", "Enter in a number: " );
        scanf( "%d", &number);

        if ( number > largest)
        {
	    secondLargest = largest;
            largest = number;
        } // end if
	
	else
       	{
	    if ( number > secondLargest)
	    {
	        secondLargest = number;
	    } // end if
	} // end else
	
	counter++;
    } // end while
    
    printf("%d is the largest value given.\n %d is the second largest value given.\n", largest, secondLargest);
    return 0;
}
