#include <stdio.h>
int main(){
    int a, b ;

    printf("put first number: ");
    scanf("%d", &a);

    printf("put second number: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("after swapping: \n");
    printf("a = %d",a);
    printf("b = %d",b);

    return 0;
}