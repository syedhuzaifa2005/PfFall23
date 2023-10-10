/*
Programmer: Syed Huzaifa Ali
Date: 10 October 2023
Description: sum of digits of a number 
*/


int main(){
	int n, sum = 0, digit;
	printf("Enter a number:");
	scanf("%d", &n);
	
	while(n != 0){
		digit = n % 10;
		sum += digit;
		n = n/10;
	}
	printf("The sum is %d", sum);
return 0;
}//end main


		
