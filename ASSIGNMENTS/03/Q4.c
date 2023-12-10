/*
Programmer: Syed Huzaifa Ali
Description: To display the required details of the workers
 */


#include <stdio.h>
#include <string.h>

struct Worker {
    int workerId;
    char firstName[20];
    char lastName[20];
    int salary;
    char joiningDate[20];
    char department[20];
};

void displayMaxSalaryWorkers(struct Worker workers[], int size);
void fetchTotalSalariesByDepartment(struct Worker workers[], int size);


int main() {
    struct Worker workers[] = {
        {1, "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
        {2, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
        {3, "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
        {4, "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
        {5, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
        {6, "Vipul", "Diwan", 200000, "2014-06-11 09:00:00", "Account"},
        {7, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
        {8, "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"},
    };

    int size = sizeof(workers) / sizeof(workers[0]);

    displayMaxSalaryWorkers(workers, size);

    fetchTotalSalariesByDepartment(workers, size);

    return 0;
}



void displayMaxSalaryWorkers(struct Worker workers[], int size) {
    char departments[10][20];
    int maxSalaries[10] = {0};
    int i,j;
    for ( i = 0; i < 10; i++) {
        strcpy(departments[i], "");
    }

    for ( i = 0; i < size; i++) {
        for ( j = 0; j < 10; j++) {
            if (strcmp(workers[i].department, departments[j]) == 0) {
                if (workers[i].salary > maxSalaries[j]) {
                    maxSalaries[j] = workers[i].salary;
                }
                break;
            } else if (strcmp(departments[j], "") == 0) {
                strcpy(departments[j], workers[i].department);
                maxSalaries[j] = workers[i].salary;
                break;
            }
        }
    }

    printf("Details of Workers with Maximum Salary for Each Department:\n");
    for (i = 0; i < 10; i++) {
        if (strcmp(departments[i], "") != 0) {
            for ( j = 0; j < size; j++) {
                if (strcmp(workers[j].department, departments[i]) == 0 && workers[j].salary == maxSalaries[i]) {
                    printf("Department: %s\n", workers[j].department);
                    printf("Worker ID: %d\n", workers[j].workerId);
                    printf("Name: %s %s\n", workers[j].firstName, workers[j].lastName);
                    printf("Salary: %d\n", maxSalaries[i]);
                    printf("Joining Date: %s\n\n\n", workers[j].joiningDate);
                    break;  
                }
            }
        }
    }
}



void fetchTotalSalariesByDepartment(struct Worker workers[], int size) {
    char departments[10][20];
    int totalSalaries[10] = {0};
    int i,j;
    for ( i = 0; i < 10; i++) {
        strcpy(departments[i], "");
    }

    for ( i = 0; i < size; i++) {
        for ( j = 0; j < 10; j++) {
            if (strcmp(workers[i].department, departments[j]) == 0) {
                totalSalaries[j] += workers[i].salary;
                break;
            } else if (strcmp(departments[j], "") == 0) {
                strcpy(departments[j], workers[i].department);
                totalSalaries[j] += workers[i].salary;
                break;
            }
        }
    }

    printf("\nDepartments and Total Salaries:\n");
    for ( i = 0; i < 10; i++) {
        if (strcmp(departments[i], "") != 0) {
            printf("%s - %d\n", departments[i], totalSalaries[i]);
        }
    }
}
