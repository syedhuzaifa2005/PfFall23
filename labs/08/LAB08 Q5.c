/*
Programmer: Syed Huzaifa Ali
Date: 24 October 2023
Description: Deciding which car to choose using function
*/


#include <stdio.h>

//defining the function
int decideCarUsage(int carNumber, int dayOfWeek) {
if(dayOfWeek%2==0) {
if(carNumber%2==0) {
return 1;
}else {
return 0;
   }
} else {
if(carNumber%2==1) {
return 1;
}else {
return 0;
}
}
}

int main() {
    int carNum, day;
   
    printf("Enter the numeric part of your car's number: ");
    scanf("%d", &carNum);
   
    printf("Enter the day of the week (1 to 7): ");
    scanf("%d", &day);
   
    //conditions to check valid input
    if (carNum >= 0 && day >= 1 && day <= 7) {
        int shouldUseCar = decideCarUsage(carNum, day);
        if (shouldUseCar==1) {
            printf("You should use your car today\n");
        } else {
            printf("You should not use your car today\n");
        }
    } else {
        printf("Invalid input, enter a valid car number and day of the week\n");
    }

    return 0;
}

