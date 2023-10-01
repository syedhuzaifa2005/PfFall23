/*
 Programmer: Syed Huzaifa Ali
 Date: 20/09/2023
 Description: Brightness controller 
*/


#include <stdio.h>

int main() {
	int intensity;
	printf("What is the value of Light Intensity from 0-1000?\n");
	scanf("%d", &intensity);
if(intensity > 500 && intensity <= 1000)
{
	printf("Brightness is changed to high");
}//end if
else if(intensity >= 100 && intensity <= 500)
{
	printf("Brightness is changed to medium");
}//end else if
else if(intensity >= 0 && intensity < 100)
{
	printf("Brightness is changed to low");
}//end else if
else
{
	printf("Invalid Input");
}//end else
return 0;
}//end main