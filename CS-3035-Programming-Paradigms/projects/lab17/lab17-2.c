#include <stdio.h>
#include <stdlib.h>

struct bunny {
    char name[10];
    int size;
} fluffles, *bunnyPtr;

int main ( void ) {
    struct bunny fluffles = {"fluffles", 0};
    struct bunny *bunnyPtr = malloc(sizeof(float));
    bunnyPtr = &fluffles; // since we define the address here, 
                          // malloc isn't necessary.

    printf("%s, %d\n", bunnyPtr->name, bunnyPtr->size);
    return 0;
}
