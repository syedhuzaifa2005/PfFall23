/*
Programmer: Syed Huzaifa Ali
Description: Printing elements of array in ascending order
*/



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

	for (int j = 0; j < i - 1; j++) {
        	for (int k = j + 1; k < i; k++) {
            		if (arr[j] > arr[k]) {
                	int temp = arr[j];
                	arr[j] = arr[k];
                	arr[k] = temp;
            		}
        	}
    	}

	printf("Sorted array in ascending order:\n");
    	for (int j = 0; j < i; j++) {
        	printf("%d ", arr[j]);
    }

}
