/*
Programmer: Syed Huzaifa Ali
Description: Finding maximum values from a matrix and creating a submatrix of those values
*/


#include <stdio.h>
#include <stdlib.h>


#define MAX_SIZE 8

void readMatrix(char *filename, int matrix[MAX_SIZE][MAX_SIZE], int size);
void computeMaxValues(int input[MAX_SIZE][MAX_SIZE], int output[MAX_SIZE / 2][MAX_SIZE / 2], int size);
void printMatrix(int matrix[MAX_SIZE / 2][MAX_SIZE / 2], int size);


int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    char *filename = argv[1];
    int size;
    
    printf("Enter the size of the matrix (2, 4, or 8): ");
    scanf("%d", &size);

    if (size != 2 && size != 4 && size != 8) {
        fprintf(stderr, "Invalid matrix size\n");
        exit(EXIT_FAILURE);
    }

    int input[MAX_SIZE][MAX_SIZE];
    int output[MAX_SIZE / 2][MAX_SIZE / 2];

    readMatrix(filename, input, size);
    computeMaxValues(input, output, size);

    printf("Resultant matrix after computing max values from 2x2 submatrices:\n");
    printMatrix(output, size);

    return 0;
}




void readMatrix(char *filename, int matrix[MAX_SIZE][MAX_SIZE], int size) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (fscanf(file, "%d", &matrix[i][j]) != 1) {
                fprintf(stderr, "Error reading from file\n");
                exit(EXIT_FAILURE);
            }
        }
    }

    fclose(file);
}




// Function to compute the max value from each 2x2 submatrix and save it into a new matrix
void computeMaxValues(int input[MAX_SIZE][MAX_SIZE], int output[MAX_SIZE / 2][MAX_SIZE / 2], int size) {
    for (int i = 0; i < size / 2; ++i) {
        for (int j = 0; j < size / 2; ++j) {
            int maxVal = input[i * 2][j * 2];
            for (int k = 0; k < 2; ++k) {
                for (int l = 0; l < 2; ++l) {
                    if (input[i * 2 + k][j * 2 + l] > maxVal) {
                        maxVal = input[i * 2 + k][j * 2 + l];
                    }
                }
            }
            output[i][j] = maxVal;
        }
    }
}




// Function to print a matrix
void printMatrix(int matrix[MAX_SIZE / 2][MAX_SIZE / 2], int size) {
    for (int i = 0; i < size / 2; ++i) {
        for (int j = 0; j < size / 2; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}