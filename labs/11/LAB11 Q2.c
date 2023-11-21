/*
Programmer: Syed Huzaifa Ali
Date: 21 Nov 2023
Description: An automobile company has a serial number for engine parts starting from AA0 to FF9. The other
characteristics of parts to be specified in a structure are: Year of manufacture, material and quantity
manufactured.
*/


#include <stdio.h>


struct Engine_Part {
    char serial_number[4];
    int year_of_manufacture;
    char material[20];
    int quantity_manufactured;
};

void retrieveInformation(struct Engine_Part engineParts[], int numParts) {
    printf("Information on parts with serial numbers between BB1 and CC6:\n");
    int i = 0;
    for (i = 0; i < numParts; i++) {
        if (engineParts[i].serial_number[0] == 'B' &&
            engineParts[i].serial_number[1] >= 'B' && engineParts[i].serial_number[1] <= 'C' &&
            engineParts[i].serial_number[2] >= '1' && engineParts[i].serial_number[2] <= '6') {
            printf("Serial Number: %s\n", engineParts[i].serial_number);
            printf("Year of Manufacture: %d\n", engineParts[i].year_of_manufacture);
            printf("Material: %s\n", engineParts[i].material);
            printf("Quantity Manufactured: %d\n", engineParts[i].quantity_manufactured);
            printf("\n");
        }
    }
}

int main() {
    const int MAX_PARTS = 100;

    struct Engine_Part engineParts[MAX_PARTS];

    int numParts;
    printf("Enter the number of engine parts (up to %d): ", MAX_PARTS);
    scanf("%d", &numParts);
	int i = 0;
    for (i = 0; i < numParts; i++) {
        printf("Enter details for Engine Part %d:\n", i + 1);
        printf("Serial Number: ");
        scanf("%s", engineParts[i].serial_number);
        printf("Year of Manufacture: ");
        scanf("%d", &engineParts[i].year_of_manufacture);
        printf("Material: ");
        scanf("%s", engineParts[i].material);
        printf("Quantity Manufactured: ");
        scanf("%d", &engineParts[i].quantity_manufactured);
    }

    retrieveInformation(engineParts, numParts);

    return 0;
}
