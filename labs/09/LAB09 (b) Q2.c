#include <stdio.h>

int multi(int a, int b ) {
	if(a == 0 || b == 0) {
		return 0;
	}
	if(b > 0) {
		return (a + multi(a, b -1));
	}
	if(b < 0) {
		return -multi(a, -b);
	}
}

int main() {
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);	
	printf("\n %d", multi(a, b));
	return 0;
}

