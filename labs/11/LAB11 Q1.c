/*
Programmer: Syed Huzaifa Ali
Date: 21 Nov 2023
Description: Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining Assume that there are not more than
450 students in the college.
? Print names of all students who joined in a particular year.
? Print the data of a student whose roll number is given.
*/



#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    char department[50];
    char course[50];
    int year_of_joining;
};

void printStudentsByYear(struct Student students[], int numStudents, int year) {
    printf("Students who joined in %d:\n", year);
    int i = 0;
    for ( i = 0; i < numStudents; i++) {
        if (students[i].year_of_joining == year) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print the data of a student whose roll number is given
void printStudentByRollNumber(struct Student students[], int numStudents, int rollNumber) {
	int i = 0;
    for (i = 0; i < numStudents; i++) {
        if (students[i].roll_number == rollNumber) {
            printf("Student Data for Roll Number %d:\n", rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].year_of_joining);
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", rollNumber);
}

int main() {
    const int MAX_STUDENTS = 450;

    struct Student students[MAX_STUDENTS];

    int numStudents;
    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);
    
	int i = 0;
    for (i = 0; i < numStudents; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Department: ");
        scanf("%s", students[i].department);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Year of Joining: ");
        scanf("%d", &students[i].year_of_joining);
    }

    // Prompt user to perform operations
    int choice;
    printf("\nChoose operation:\n1. Print names of students by year\n2. Print data of a student by roll number\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int year;
        printf("Enter the year: ");
        scanf("%d", &year);
        printStudentsByYear(students, numStudents, year);
    } else if (choice == 2) {
        int rollNumber;
        printf("Enter the roll number: ");
        scanf("%d", &rollNumber);
        printStudentByRollNumber(students, numStudents, rollNumber);
    } else {
        printf("Invalid choice.\n");
    }
}

    
