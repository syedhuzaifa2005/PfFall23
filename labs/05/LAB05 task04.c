/* 
 Programmer: Syed Huzaifa Ali
 Date: 20/09/2023
 Description: Calculator using switch
*/


#include <stdio.h>

int main() {
	float a, b, answer;
	char operator;
	printf("Enter the first number\n");
	scanf("%f", &a);
	printf("Enter the second number\n");
	scanf("%f", &b);
	printf("Enter the operator\n");
	scanf(" %c", &operator);

	switch(operator) {
	case '/':
	answer = a / b;
	break;

	case '*':
	answer = a * b;
	break;

	case '+':
	answer = a + b;
	break;

	case '-':
	answer = a - b;
	break;

	default:
	printf("Invalid operator");
	break;
}//end switch
	printf("%f", answer);
	return 0;
}//end main
