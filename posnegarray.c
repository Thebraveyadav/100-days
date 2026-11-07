#include <stdio.h>
int main(){
    int a[100], n, i;
    int positive = 0, negative =  0, zero = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);

        if(a[i] > 0){
            positive++;
        }
        else if(a[i] < 0){
            negative++;   
        }
    }
printf("Positive elements = %d\n", positive);
printf("Negative elements = %d\n", negative);
printf("Zero elements = %d\n", zero);

return 0;

}