#include<stdio.h>
#include<stdlib.h>

main() {
int n;
printf("enter the value of n: ");
scanf("%d",&n);

int i;
char char_arr[n];
int int_arr[n];
long long int long_arr[n];

for ( i = 0; i < n; i++) {
        char_arr[i]=rand()%128;
    }

for ( i = 0; i < n; i++) {
        int_arr[i]=rand();
    }

for ( i = 0; i < n; i++) {
        long_arr[i]=rand()*rand();
    }
   
printf("\nAddresses and values in charArray:\n");
    for ( i = 0; i < n; i++) {
        printf("Address: %p, Value: %c\n", (void*)&char_arr[i], char_arr[i]);
    }
   
    printf("\nAddresses and values in intArray:\n");
    for ( i = 0; i < n; i++) {
        printf("Address: %p, Value: %d\n", (void*)&int_arr[i], int_arr[i]);
    }

    printf("\nAddresses and values in longLongIntArray:\n");
    for ( i = 0; i < n; i++) {
        printf("Address: %p, Value: %lld\n", (void*)&long_arr[i], long_arr[i]);
    }
    return;
}
