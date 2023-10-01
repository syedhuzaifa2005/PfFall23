/*
 Programmer: Syed Huzaifa Ali
 Date: 12/09/2023
 Description: Solution of inputs using quadratic formula
*/


#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, x1, x2;

	printf("Enter the value of a\n");
	scanf("%f", &a);

	printf("Enter the value of b\n");
	scanf("%f", &b);

	printf("Enter the value of c\n");
	scanf("%f", &c);
	x1 = (-b + sqrt(b*b - 4*a*c))/2*a;
	x2 = (-b - sqrt(b*b - 4*a*c))/2*a;

	printf("The value of x1 is %f The value of x2 is %f", x1, x2);
return 0;
}//end main
