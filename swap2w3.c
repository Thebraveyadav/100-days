#include <stdio.h>
int main(){
    int a, b, c;
    printf("put first number=");
    scanf("%d", &a);
    printf("put second number=");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;

    printf("swapping with variables=\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    return 0;
}