/*
Programmer: Syed Huzaifa Ali
Date: 24 October 2023
Description: Password length validation and user authentication
*/


#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    char correctpassword[] = "Secure123";
   
    printf("Enter the password: ");
    fgets(password, sizeof(password), stdin);

    // Remove the newline character from the input
    password[strcspn(password, "\n")] = '\0';

    if (strlen(password) >= 8) {
        if (strcmp(password, correctpassword) == 0) {
            printf("Correct password login successful\n");
        } else {
            printf("Incorrect password login failed\n");
        }
    } else {
        printf("The length is incorrect\n");
    }
    
    return 0;
}


