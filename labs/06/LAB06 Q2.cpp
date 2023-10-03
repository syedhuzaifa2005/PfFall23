#include <stdio.h>

int main() {
    int n1 = 1, n2 = 1, next_term, sum = 0;

    printf("Fibonacci series up to 10000 terms:\n");
    printf("%d, %d, ", n1, n2);

    for (next_term = n1 + n2; next_term <= 10000;) {
        if (next_term % 3 == 0 || next_term % 5 == 0 || next_term % 7 == 0) {
            sum += next_term;
        }
        printf("%d, ", next_term);
        n1 = n2;
        n2 = next_term;
        next_term = n1 + n2;
    }

    printf("\nSum of Fibonacci numbers divisible by 3, 5, or 7: %d\n", sum);

    return 0;
}