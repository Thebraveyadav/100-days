#include <stdio.h>

int main()
{
    int arr[100];
    int n, position, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of element to delete: ");
    scanf("%d", &position);

    // Check whether position is valid
    if(position < 1 || position > n)
    {
        printf("Invalid position!");
        return 0;
    }

    // Shift elements towards the left
    for(i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Reduce the size of array
    n--;

    printf("Array after deletion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}