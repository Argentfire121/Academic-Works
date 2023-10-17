#include <stdio.h>

void swap(int *a, int *b);

int main (void) {
    
    int a;
    int b;

    printf("%s", "Please put in two numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    swap(&a, &b);
    printf("Now the first value's %d, and the second's %d!\n", a, b);

    return 0;
}

void swap(int *a, int *b) {
    
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
