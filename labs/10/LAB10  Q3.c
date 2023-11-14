/*
PROGRAMMER: Syed Huzaifa Ali
DATE: 14 Nov 2023
DESCRIPTION: Create a C program that dynamically allocates memory for a 2D array of integers.
Write a function that accepts a pointer to a pointer to an integer and fills 
the 2D array with consecutive prime numbers. 
*/	


#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

void fillWithPrimes(int **arr, int rows, int cols) {
    int num = 2;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            while (!isPrime(num)) {
                num++;
            }
            arr[i][j] = num;
            num++;
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    fillWithPrimes(arr, rows, cols);

    printf("2D array of consecutive prime numbers:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}


		 
