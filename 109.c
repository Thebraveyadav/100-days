#include <stdio.h>

int main()
{
    int arr[100];
    int n, k;
    int i, j;
    int sum, maxSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    // Calculate sum of first window
    sum = 0;

    for(i = 0; i < k; i++)
    {
        sum = sum + arr[i];
    }

    maxSum = sum;

    // Check remaining windows
    for(i = 1; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d\n", maxSum);

    return 0;
}
