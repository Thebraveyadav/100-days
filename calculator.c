#include <stdio.h>
int main(){
    int a, b;
    char C;

    printf("Enter your desired operation: ");
    scanf("%c", &C);

    printf("Enter firts number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    switch(C)
    {
        case '+':
            printf("result = %d", a + b);
            break;

        case '-':
            printf("result = %d", a - b);
            break;
        
        case '*':
            printf("result = %d, a * b");
            break;

        case '/':
            printf("result = %d, a / b");
            break;
        case '%':
            printf("result = %d", a % b);
            break;

        default:
            printf("invalid input, try again");

    }
    return 0;
}