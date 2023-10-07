#include <stdio.h>

int main(){
	int i;
	printf("Enter size of array:");
	scanf("%d", &i);
	int arr[i];
	for(int j = 0; j<i; j++){
		printf("Element %d:", j+1);
		scanf("%d", &arr[j]);
	}//end for

	printf("Values in reverse order:\n");
	for(int j = i-1; j>=0; j--){
		printf("%d\t", arr[j]);
	}//end for
return 0;
}//end main