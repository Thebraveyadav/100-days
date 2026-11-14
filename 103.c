#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int leftSum, rightSum;
    int pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Check each index
    for(i = 0; i < n; i++)
    {
        leftSum = 0;
        rightSum = 0;

        // Find sum of elements on left side
        for(j = 0; j < i; j++)
        {
            leftSum = leftSum + arr[j];
        }

        // Find sum of elements on right side
        for(j = i + 1; j < n; j++)
        {
            rightSum = rightSum + arr[j];
        }

        // Check for pivot index
        if(leftSum == rightSum)
        {
            pivot = i;
            break;
        }
    }

    printf("Pivot index = %d\n", pivot);

    return 0;
}
