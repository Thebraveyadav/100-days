#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int element, i;

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for (i = n - 1; i >= 0 && arr[i] > element; i--)
    {
        arr[i + 1] = arr[i];
    }


    arr[i + 1] = element;
    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
