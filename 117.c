#include <stdio.h>

int main()
{
    int a[100], b[100], merged[200];
    int m, n;
    int i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter first sorted array: ");

    for(i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter second sorted array: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    // Compare elements of both arrays
    while(i < m && j < n)
    {
        if(a[i] < b[j])
        {
            merged[k] = a[i];
            i++;
        }
        else
        {
            merged[k] = b[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements of first array
    while(i < m)
    {
        merged[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while(j < n)
    {
        merged[k] = b[j];
        j++;
        k++;
    }

    printf("Merged array: ");

    for(i = 0; i < m + n; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
