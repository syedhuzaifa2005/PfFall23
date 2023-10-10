/*
Programmer: Syed Huzaifa Ali
Date: 10 October 2023
Description: Division without division operator
*/


#include <stdio.h>

int main(){
	int num, den, quotient=0;
	printf("Enter numerator:");
	scanf("%d", &num);
	printf("Enter denominator:");
	scanf("%d", &den);

	if(den==0){
		printf("Math Error");
	}
	else {
		if(den>num){
			printf("The quotient is %d", quotient);
			printf("The remainder is %d", num);
		} else {
			while(num>=den){
				num = num-den;
				quotient = quotient + 1;
			}
		}
		printf("The quotient is %d\n", quotient);
		printf("The remainder is %d", num);
return 0;
}//end main




	
		