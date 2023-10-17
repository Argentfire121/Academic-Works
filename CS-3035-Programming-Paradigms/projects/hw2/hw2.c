/* Dexter Kale - CS 3035 - 05
 *
 * This code will essentially ask the users for 2 dates, 
 * and then using the defined structure conversion, will convert it
 * into days, and then subtract the 2 values to tell the user the amount
 * of days in between the 2 dates.
 */

#include <stdio.h>

struct date {
    
    int month;
    int day;
    int year;

}; // struct template

int conversion(struct date dateStruct);

int main(void) {

    struct date date1 = {0, 0, 0}; // declare struct
    struct date date2 = {0, 0, 0}; // declare struct
    int d1 = 0; // declare converted date1
    int d2 = 0; // declare converted date2

    // take in date1
    printf("%s", "Date 1: Insert Month (MM): ");
    scanf("%d", &date1.month);
    printf("%s", "Date 1: Insert Day (DD): ");
    scanf("%d", &date1.day);
    printf("%s", "Date 1: Insert year (YYYY): ");
    scanf("%d", &date1.year);

    // take in date2
    printf("%s", "Date 2: Insert Month (MM): ");
    scanf("%d", &date2.month);
    printf("%s", "Date 2: Insert Day (DD): ");
    scanf("%d", &date2.day);
    printf("%s", "Date 2: Insert Year (YYYY): ");
    scanf("%d", &date2.year);

    printf("%d %d %d\n", date1.month, date1.day, date1.year);
    printf("%d %d %d\n", date2.month, date2.day, date2.year);

    d1 = conversion(date1);
    d2 = conversion(date2);

    printf("The Difference in days comes up to %d\n", d2 - d1);

    return 0;
}   // end main

int conversion(struct date dateStruct) {

    int f = 0; // declare f
    int g = 0; // declare g

    if (dateStruct.month <= 2) {
        f = dateStruct.year - 1;
    }

    else {
        f = dateStruct.year;
    }

    if (dateStruct.month <= 2) {
        g = dateStruct.month + 13;   
    }

    else {
        g = dateStruct.month + 1;
    }

    return 1461 * (f/4) + 153 * (g/5) + dateStruct.day;
}
