#include <stdio.h>
int main(){
    int a,b,sum,difference,product,quotient;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    difference=a-b;
    printf("difference=%d\n",difference);
    product=a*b;
    printf("product=%d\n",product);
    quotient=a/b;
    printf("quotient=%d\n",quotient);
    return 0;
}