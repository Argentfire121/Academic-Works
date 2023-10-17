/* This code simulates a standard casino game called craps.
 * It works by rolling 2 dice and having the output determine whether or
 * not the player wins, loses, or continues. 
 *
 * Extra credit was NOT attempted.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice();
int rollDice2();

int main( void ) {
    
    srand(time(NULL)); // current time as seed for rand

    int dice1 = 0; // initialize dice1
    int dice2 = 0; // initialize dice2
    int point = 0; // initialize point for count
    int determine = 2; // initialize determine

    // first section to determine win, loss, or point to wait for
    dice1 = rollDice();
    dice2 = rollDice();    
    point = dice1 + dice2; // initialize point

    printf("%d, %d, Your point is %d\n", dice1, dice2, point);

    if (point == 7 || point == 11) {
        determine == 0;
    }

    else if (point == 2 || point == 3 || point == 12) {
        determine == 1;
    }

    while (determine >= 0) {
        
        switch(determine) {
            
            case 0:

                printf("%s", "You win!\n");
                determine = -1;
                break;

            case 1:

                printf("%s", "Craps!\n");
                determine = -1;
                break;

            case 2:

                dice1 = rollDice();
                dice2 = rollDice();

                printf("%d, %d = %d\n", dice1, dice2, dice1 + dice2);
                
                if ((dice1 + dice2) == point) {
                    determine = 0;
                }

                else if ((dice1 + dice2) == 7) {
                    determine = 1;
                }

                break;
        }
    }

    return 0;
}

int rollDice() {

    int x; // random value
    x = (1 + rand()) % 6;
    
    return x;
}
