#include <stdio.h>

int factorial(int N) {
    if (N == 0) {
        return 1;
    } else {
        return N * factorial(N - 1);
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    int result = factorial(N);
    printf("Factorial of %d is %d\n", N, result);
    return 0;
}

