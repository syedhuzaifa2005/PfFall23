/* 
 Programmer: Syed Huzaifa Ali
 Date: 12/09/2023
 Description: Ask n integers and print the sum of their squares
*/


#include <stdio.h>
#include <math.h>

int main() {
	int n, i, sum, number = 0;
 	printf("Enter a number\n");
	scanf("%d", &n);
	i=0;
while (i<n)
{
 	printf("Enter an integer\n");
	scanf("%d", &number);
	sum += number * number; 
	i++;	
}//end while
	printf("The sum is %d", sum);
return 0;
}//end main