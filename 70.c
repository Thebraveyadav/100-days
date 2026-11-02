#include <stdio.h>

int main()
{
    int arr[100];
    int n, k, i, j, temp;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    k = k % n;

    // Rotate array k times
    for(i = 0; i < k; i++)
    {
        // Save last element
        temp = arr[n - 1];

        // Shift elements one position to right
        for(j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }

        // Put last element at first position
        arr[0] = temp;
    }

    printf("Array after right rotation: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
