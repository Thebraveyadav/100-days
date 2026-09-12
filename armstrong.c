#include <stdio.h>
int main()
{
    int n, ori, digit, sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    ori = n;

    while (n  > 0)
    {
        digit = n % 10;

        sum = sum + (digit * digit * digit);

        n = n / 10;
    }

    if(sum == ori)
    {
        printf("It is an Armstrong number.");
    }
    else
    {
        printf("It is not an Armstrong number.");
    }

    return 0;
}