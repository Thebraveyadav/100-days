#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int previousGreater;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Previous greater elements:\n");

    for(i = 0; i < n; i++)
    {
        previousGreater = -1;

        // Search towards the left
        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                previousGreater = arr[j];
                break;
            }
        }

        printf("%d", previousGreater);

        if(i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}
