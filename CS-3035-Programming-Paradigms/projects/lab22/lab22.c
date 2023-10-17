#include <stdio.h>

int arpGenerator(int creditScore);

int main() {
    
    int score; // declare scan

    printf("%s", "Print your Credit Score (0 - 850): ");
    scanf("%d", &score);

    printf("Your ARP is %d%%\n", arpGenerator(score));
    
    printf("For credit score of 821: ARP is %d%%\n", arpGenerator(821));
    printf("For credit score of 520: ARP is %d%%\n", arpGenerator(520));

    return 0;
} // end main

int arpGenerator(int creditScore) {
    
    if (creditScore < 500) {
        return 23;
    }

    else if (creditScore < 600) {
        return 11;
    }

    else if (creditScore < 700) {
        return 8;
    }

    else if (creditScore < 800) {
        return 5;
    }

    else if (creditScore < 851) {
        return 3;
    }

    else {
        unsigned int a = -1;
        return a;
    }
} // end arpGenerator
