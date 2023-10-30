/*
Programmer: Syed Huzaifa Ali
Description: To find different number pairs in the array having sum equal to a target integer t
*/



#include <stdio.h>


int main() {
    int N, t;

    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int arr[N];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target integer (t): ");
    scanf("%d", &t);
    
    printf("Pairs with sum equal to %d:\n", t);
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == t) {
                printf("Pair: (%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
