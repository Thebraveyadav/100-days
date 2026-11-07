#include <stdio.h>
int main(){
    int n;
    float sum = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        sum = sum + (float)(2 * i - 1)/(2 * i);
    }
    printf("sum of the series = %.2f", sum);

    return 0;
}