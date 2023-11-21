/*
Programmer: Syed Huzaifa Ali
Date: 23 Nov 2023
Description: Write a program to compare two dates entered by the user. Make a structure named Date to store
the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal"
otherwise display "Dates are not equal".
*/



#include <stdio.h>


struct Date {
    int day;
    int month;
    int year;
};


int compareDates(struct Date date1, struct Date date2) {
    if (date1.year == date2.year && date1.month == date2.month && date1.day == date2.day) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    struct Date date1, date2;

    printf("Enter details for the first date:\n");
    printf("Day: ");
    scanf("%d", &date1.day);
    printf("Month: ");
    scanf("%d", &date1.month);
    printf("Year: ");
    scanf("%d", &date1.year);

    printf("Enter details for the second date:\n");
    printf("Day: ");
    scanf("%d", &date2.day);
    printf("Month: ");
    scanf("%d", &date2.month);
    printf("Year: ");
    scanf("%d", &date2.year);

    if (compareDates(date1, date2)) {
        printf("Dates are equal.\n");
    } else {
        printf("Dates are not equal.\n");
    }

    return 0;
}
