/*
 Programmer: Syed Huzaifa Ali
 Date: 20/09/2023
 Description: Roots of Quadratic Equation using discriminant
*/


#include <stdio.h>
#include <math.h>

int main() { 
	float a, b ,c, x1, x2, disc;
	printf("Enter the value of a\n");
	scanf("%f", &a);

	printf("Enter the value of b\n");
	scanf("%f", &b);

	printf("Enter the value of c\n");
	scanf("%f", &c);
        disc = b*b - (4*a*c);

if(disc == 0)
{
	x1 = x2 = -b/(2*a);
	printf("Roots are real and equal\n");
	printf("The value of x1 and x2 is %f", x1, x2);
}//end if

else if(disc > 0)
{
	x1 = (-b + sqrt(disc))/2*a;
	x2 = (-b - sqrt(disc))/2*a;
	printf("Roots are real and unequal\n");
	printf("The value of x1 is %f and the value of x2 is %f", x1, x2);
}//end else if

else
{
	printf("Roots are complex");
}//end else

return 0;
}//end main
