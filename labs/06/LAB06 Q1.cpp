#include <stdio.h>

int main() {
    int num, sum = 0, j = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    while (j < num) { 
        if (num % j == 0) {
            sum = sum + j;
        }
        j++; 
    }

    if (sum == num) {
        printf("The number is a perfect number\n");
    } else {
        printf("The number is not a perfect number\n");
    }
    return 0;
}