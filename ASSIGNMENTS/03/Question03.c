#include <stdio.h>
#include <stdlib.h>

void mergeAndWriteToFile(int id);

int main() {
    int id;

    printf("Syed Huzaifa Ali\n23k-0004\n\n");

    // Get the record ID as input
    printf("Enter record ID: ");
    scanf("%d", &id);

    // Call the function to merge and write to Combine.txt
    mergeAndWriteToFile(id);

    return 0;
}

void mergeAndWriteToFile(int id) {
    FILE *personalFile = fopen("Personal.txt", "r");
    if (personalFile == NULL) {
        printf("Error! Could not open Personal.txt");
        exit(EXIT_FAILURE);
    }

    FILE *departmentFile = fopen("Department.txt", "r");
    if (departmentFile == NULL) {
        printf("Error! Could not open Department.txt");
        fclose(personalFile);
        exit(EXIT_FAILURE);
    }

    FILE *combineFile = fopen("Combine.txt", "a");
    if (combineFile == NULL) {
        printf("Error! Could not open Combine.txt");
        fclose(personalFile);
        fclose(departmentFile);
        exit(EXIT_FAILURE);
    }

    int personalId, departmentId, salary;
    char name[50];

    while (fscanf(personalFile, "%d,%s", &personalId, name) == 2) {
        if (personalId == id) {
            while (fscanf(departmentFile, "%d,%d", &departmentId, &salary) == 2) {
                if (departmentId == id) {
                    fprintf(combineFile, "%d,%s,%d\n", id, name, salary);
                    printf("Record with ID %d merged and written to Combine.txt\n", id);
                    break;
                }
            }
            break;
        }
    }

    fclose(personalFile);
    fclose(departmentFile);
    fclose(combineFile);
}
