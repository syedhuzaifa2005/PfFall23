/*
 Programmer: Syed Huzaifa Ali
 Date: 20/09/2023
 Description: Delete or Not Delete?
*/


#include <stdio.h>

int main() {
	char a;
	printf("Are you sure to delete? \n");
	printf("Yes or No\n");
	scanf("%c", &a);
	switch(a) {

	case 'Y':
	printf("Deleted Successfully");
	break;

	case 'y':
	printf("Deleted Successfully");
	break;

	case 'N':
	printf("Deleted Cancelled");
	break;

	case 'n':
	printf("Deleted Cancelled");
	break;

	default;
	printf("Chooes the right option");
	break;
}
return 0;
}//end main