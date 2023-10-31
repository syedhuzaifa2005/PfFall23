#include <stdio.h>

void swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
	printf("j = %d, k = %d\n", a, b);
}

int main() {
	int j = 2, k = 5;
	printf("j = %d, k = %d\n", j, k);
	swap(j,k);
	return 0; 
}

// THE FUNCTION DOESN'T USE THE TMP VARIABLE CORRECTLY WHICH IS WHY THE VALUE IS NOT SWAPPED
