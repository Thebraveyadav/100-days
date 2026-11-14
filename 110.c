#include <stdio.h>

int main()
{
    int arr[100];
    int n, k;
    int i, j;
    int max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    printf("Maximum elements: ");

    // Start each window
    for(i = 0; i <= n - k; i++)
    {
        max = arr[i];

        // Check elements of current window
        for(j = i + 1; j < i + k; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}
