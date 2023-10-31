#include <stdio.h>

void reverse(int *arr, int size) {
int *start = arr;
    int *end = arr + size - 1;
   
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start=start+1;
        end=end-1;
    }
}

int main() {
int i,n=10;
int arr[n];

for(i=0;i<10;i++) {
printf(" Element %d: ",i+1);
scanf("%d",&arr[i]);
printf("\n");
}
reverse(arr,n);

printf("reversed array:\n");
for(i=0;i<10;i++) {
printf("Element %d: %d",i+1,arr[i]);
printf("\n");
}
return;
}
