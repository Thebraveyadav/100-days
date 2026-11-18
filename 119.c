#include <stdio.h>

int main()
{
    int arr[100];
    int freq[101] = {0};
    int n, i;
    int repeated = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(freq[arr[i]] == 1)
        {
            repeated = arr[i];
        }

        freq[arr[i]]++;
    }

    printf("Repeated element = %d\n", repeated);

    return 0;
}
