/*
 Programmer: Syed Huzaifa Ali
 Date: 20/09/2023
 Description: Actual amount, Saved amount and Discounted price
*/


#include <stdio.h>
int main() {
	int price;
	float total, saved = 0;
	printf("Enter the cost of shopping\n");
	scanf("%d", &price);

if(price >= 2000 && price <= 4000)
{
	saved = price*20.0/100;
	printf("%fRs/- is your saved amount\n", total);
	total = price - saved;
	printf("%fRs/- is your total price\n", saved);
}//end if
else if(price > 4000 && price <= 6000)
{
	saved = price*30.0/100;
	printf("%fRs/- is your saved amount\n", total);
	total = price - saved;
	printf("%fRs/- is your total price\n", saved);
}//end else if
else if(price > 6000)
{
	saved = price*50.0/100;
	printf("%fRs/- is your saved amount\n", total);
	total = price - saved;
	printf("%fRs/- is your total price\n", saved);
}//end else if
else
{
	printf("%dRs/- is your total price\n", price);
	printf("%fRs/- is your saved amount\n", saved);
}
return 0;
}//end main