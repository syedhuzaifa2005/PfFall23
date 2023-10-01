/* 
 Programmer: Syed Huzaifa Ali
 Date: 20/09/2023
 Description: To tell whether the input is upper-case or lower-case character or a special character or a digit
*/


#include <stdio.h>

int main() {
	int input;
	printf("Enter input\n");
	scanf("%d", &input);

if((input >= 33 && input <= 47) || (input >= 58 && input <= 63)) 
{
	printf("The input is a Special Character");
}//end if
else if(input >= 65 && input <= 90)
{
	printf("The input is an Upper Case Character");
}//end else if
else if(input >= 97 && input <= 122)
{
	printf("The input is a Lower Case Character");
}//end else if
else if(input >= 0 && input <= 9)
{
	printf("The input is a Digit");
}//end else if

return 0;
}//end main
