/*
Programmer: Syed Huzaifa Ali
Date: 24 October 2023
Description: Calculator using functions
*/


#include <stdio.h>


int calculate(int num1, int num2, char operator) {
    int result;
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Division by zero is not allowed\n");
                result = 0;
            }
            break;
        default:
            printf("Invalid operator\n");
            result = 0;
    }
    return result;
}

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    result = calculate(num1, num2, operator);

    printf("%d %c %d = %d\n", num1, operator, num2, result);

    return 0;
}



