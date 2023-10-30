/*
Programmer: Syed Huzaifa Ali
Description: Managing shirt details for a clothing store
*/



#include <stdio.h>

int main() {
    int num_of_Shirts;
    printf("Enter the number of shirts: ");
    scanf("%d", &num_of_Shirts);
    int shirt_detail[num_of_Shirts][2];
    for (int i = 0; i < num_of_Shirts; i++) {
        printf("Enter age for shirt %d: ", i + 1);
        scanf("%d", &shirt_detail[i][0]);
        printf("Enter price for shirt %d: ", i + 1);
        scanf("%d", &shirt_detail[i][1]);
    }

    // Sort the shirt details based on age in ascending order
    for (int i = 0; i < num_of_Shirts - 1; i++) {
        for (int j = 0; j < num_of_Shirts - i - 1; j++) {
            if (shirt_detail[j][0] > shirt_detail[j + 1][0]) {
                int tempAge = shirt_detail[j][0];
                shirt_detail[j][0] = shirt_detail[j + 1][0];
                shirt_detail[j + 1][0] = tempAge;
                int tempPrice = shirt_detail[j][1];
                shirt_detail[j][1] = shirt_detail[j + 1][1];
                shirt_detail[j + 1][1] = tempPrice;
            }
        }
    }

    // Display the sorted list in ascending order with respect to age
    printf("Sorted list in ascending order with respect to Age:\n");
    for (int i = 0; i < num_of_Shirts; i++) {
        printf("Age: %d, Price: %d\n", shirt_detail[i][0], shirt_detail[i][1]);
    }

    // Sort the shirt details based on price in descending order
    for (int i = 0; i < num_of_Shirts - 1; i++) {
        for (int j = 0; j < num_of_Shirts - i - 1; j++) {
            if (shirt_detail[j][1] < shirt_detail[j + 1][1]) {
                int tempPrice = shirt_detail[j][1];
                shirt_detail[j][1] = shirt_detail[j + 1][1];
                shirt_detail[j + 1][1] = tempPrice;
                int tempAge = shirt_detail[j][0];
                shirt_detail[j][0] = shirt_detail[j + 1][0];
                shirt_detail[j + 1][0] = tempAge;
            }
        }
    }

    // Display the sorted list in descending order with respect to price
    printf("\nSorted list in descending order with respect to Price:\n");
    for (int i = 0; i < num_of_Shirts; i++) {
        printf("Age: %d, Price: %d\n", shirt_detail[i][0], shirt_detail[i][1]);
    }

    return 0;
}
