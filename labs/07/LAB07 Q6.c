/*
Programmer: Syed Huzaifa Ali
Description: Calculatimg frequency of the elements of the array
*/



#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }//end for

    int visited[N];
    int frequency[N];

    for (int i = 0; i < N; i++) {
        visited[i] = -1;
    }//end for

    for (int i = 0; i < N; i++) {
        if (visited[i] == 0) {
            continue;
        }//end if 

        int count = 1;
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 0;
            }//end if 
        }//end for

        visited[i] = 0;
        frequency[i] = count;

        printf("Frequency of %d = %d\n", arr[i], count);
    }// end for

    return 0;
}//end main

