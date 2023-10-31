/*
Programmer: Syed Huzaifa Ali
Description: finding a submatrix of 1s in an input binary matrix
*/



#include <stdio.h>

void display_matrix(int matrix[][100], int row, int col);
void input_matrix(int matrix[][100], int row, int col);
void find_largest_sq_matrix(int matrix[][100], int row, int col);

int main() {
    int row, col;
    printf("Enter the number of rows:\n");
    scanf("%d", &row);
    printf("Enter the number of columns:\n");
    scanf("%d", &col);
    if (row < 2 || col < 2) {
        printf("Invalid Input\n");
    }

    int matrix[100][100];
    input_matrix(matrix, row, col);

    printf("Your matrix is: \n");
    display_matrix(matrix, row, col);

    find_largest_sq_matrix(matrix, row, col);

    return 0;
}

void display_matrix(int matrix[][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void input_matrix(int matrix[][100], int row, int col) {
    printf("Enter the elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void find_largest_sq_matrix(int matrix[][100], int row, int col) {
    int max_size = 0;
    int max_i = 0;
    int max_j = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] == 1) {
                int size = 1;
                while (size + i < row && size + j < col) {
                    int is_square = 1;
                    for (int x = i; x <= i + size; x++) {
                        for (int y = j; y <= j + size; y++) {
                            if (matrix[x][y] != 1) {
                                is_square = 0;
                                break;
                            }
                        }
                        if (!is_square) {
                            break;
                        }
                    }
                    if (is_square) {
                        if (size + 1 > max_size) {
                            max_size = size + 1;
                            max_i = i;
                            max_j = j;
                        }
                        size++;
                    } else {
                        break;
                    }
                }
            }
        }
    }

    if (max_size > 0) {
        printf("The largest submatrix of 1s is of size %d:\n", max_size, max_i, max_j);
        for (int i = max_i; i < max_i + max_size; i++) {
            for (int j = max_j; j < max_j + max_size; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("No submatrix of 1s found.\n");
    }
}

