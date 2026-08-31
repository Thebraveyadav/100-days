#include <stdio.h>
int main(){
    float a, b, c;
    printf("Enter the length of sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a == b && b == c)
        {
            printf("This triangle is an equilateral triangle.");
        }
    else if (a == b || b == c || c == a)
        {
            printf("This triangle is an isosceles triangle.");
        }
    else
        {
            printf("This triangle is a scalene triangle.");
        }
    return 0;    
}