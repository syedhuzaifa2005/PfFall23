/*
 Programmer: Syed Huzaifa Ali
 Date: 12/09/2023
 Description: Print the pattern for any number of n
*/

#include <stdio.h>
#include <math.h>

int main() {
	int n;
	int i = 0;
	printf("Enter the value of n")
	scanf("%d", &n);
while (i<n) {
	int j = 0;
while (j<n) {
	printf("*");
	j++;
}//end while
	printf("\n");
	i++;
}//end while

return 0;
}//end main
