#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int largest, second;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second = arr[0];

    // Find largest element
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // Find second largest element
    for(i = 0; i < n; i++)
    {
        if(arr[i] > second && arr[i] < largest)
        {
            second = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Second largest element = %d\n", second);

    return 0;
}