/* 
 Programmer: Syed Huzaifa Ali
 Date: 12/09/2023
 Description: Which one is older?


#include <stdio.h>
#include <math.h>

int main() {
	int D1, D2, M1, M2, Y1, Y2;
	printf("Enter DOB of First Person");
	scanf("%d %d %d", &D1, &M1, &Y1);

	printf("Enter DOB of Second Person");
	scanf("%d %d %d", &D2, &M2, &Y2);

if (Y2>Y1 && (M2>M1 && (D2>D1 || D2<D1) || M2<M1 && (D2>D1 || D2<D1) ) {
	printf("Second Person is older");
}

else if (Y2==Y1 && M2==M1 && D2==D1) {
	printf("Both are of same age");
}

else {
	printf("First Person is older");
}

return 0;
}//end main