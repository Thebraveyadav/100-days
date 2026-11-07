#include <stdio.h>

int main(){
    int a[100], n, i, sum;
    sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Sum of array elements = %d", sum);
}
