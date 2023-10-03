#include <stdio.h>

int main() {
	int n1, n2, LCM=1, GCD=1, f=2;
	printf("Enter first number\n");
	scanf("%d", &n1);
	printf("Enter second number\n");
	scanf("%d", &n2);
	
	while(f <= n1 && f <= n2){
		if(n1 % f == 0 && n2 % f == 0){
		
		GCD = GCD*f;
		n1 = n1/f;
		n2 = n2/f;
		f++;
	}
}
LCM = n1*n2*GCD;

printf("GCD is %d:", GCD);
printf("LCM is %d:", LCM);
return 0;
}