/*
Programmer: Syed Huzaifa Ali
Date: 10 October 2023
Description: Determining whether a matrix is symmetric or not
*/


#include <stdio.h>

int main(){
	int row, col, k;
	printf("Enter the number of rows and columns:\t");
	scanf("%d %d", &row, &col);

	int arr[100][100];
	printf("Enter the elements:");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			scanf("%d", &arr[i][j]);
	}}

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			if(arr[i][j] == arr[j][i]){
				k = 0;
			}
		else{
			k = 1;
		}
	}
	if(k == 0){
		printf("Matrix is Symmetric");
	}
	else{
		printf("Matrix is Unsymmetric");

	}
}
return 0;
}//end main