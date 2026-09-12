#include <stdio.h>
int main(){
    int n, ori, rev, rem;
    rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    ori = n;
    if (n < 0)
    n = -n;

    while (n>0)
    {
            rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
    }
    if (ori == rev)
        printf("%d is a palindrome.\n", ori);
    else
        printf("%d is not a palindrome.\n", ori);

    return 0;
}