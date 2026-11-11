#include <stdio.h>

int main()
{
    int nums[100];
    int n, target;
    int first = -1, last = -1;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    // Find first occurrence
    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for(i = n - 1; i >= 0; i--)
    {
        if(nums[i] == target)
        {
            last = i;
            break;
        }
    }

    printf("%d, %d\n", first, last);

    return 0;
}
