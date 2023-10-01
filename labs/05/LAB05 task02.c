/*
 Programmer: Syed Huzaifa Ali
 Date: 20/09/2023
 Description: Morning, Evening or Night?
*/


int main() {
	int hr;
	printf("Enter the number of hours\n");
	scanf("%d",&hr);

if(hr>=5 && hr<=11) 
{
	printf("Good Morning");
}

else if(hr>11 && hr<=18)
{
	printf("Good Evening");
}

else if(hr>18 && hr<=24)
{
	printf("Good Night");
}
else
{
    printf("invalid input");
}

return 0;
}//end main