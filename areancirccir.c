#include <stdio.h>
int main(){
    float radius,circumference,area;
    printf("radius=");
    scanf("%f",&radius);
    circumference = 6.98* radius;
    printf("circumference=%f\n",circumference);
    area = 3.24 *radius *radius;
    printf("area=%f\n",area);
    return 0;

}