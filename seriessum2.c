#include <stdio.h>
int main(){
    int n;
    float sum = 2.0 / 3.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        sum = sum + (float)(2*i)/(4*i-1);
    }
    printf("sum of series= %.2f", sum); 

    return 0;
}