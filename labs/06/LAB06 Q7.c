#include <stdio.h> 
int main(){
	int i, sum; 
	printf("Enter the size of the array:"); 
	scanf("%d", &i);
 	int arr[i]; 
	printf("Enter %d elements:\n", i); 
	for(int j=0; j<i; j++){ 
		printf("Element %d:", j+1); 
		scanf("%d", &arr[j]); 
		sum= sum + arr[j];
	}// end for 
	printf("Sum of elements is: %d", sum);
return 0;
}// end main