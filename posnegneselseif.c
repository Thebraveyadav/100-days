#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0 )
    {
        if (n == 0)
        {
        printf("Entered number is zero.\n");
        }
        else
    {
        printf("Entered number is positive.\n");
    }
}
else
{
    printf("Entered number is negative.\n");
}
    return 0;
}