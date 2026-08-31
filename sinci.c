#include <stdio.h>
#include <math.h>
int main(){
    float p, r, t, si ,ci;
    printf("Enter the value of principal: ");
    scanf("%f\n", &p);
    printf("Enter the rate of interest in percent: ");
    scanf("%f\n", &r);
    printf("Enter the time in years: ");
    scanf("%f\n", &t);
    si = p * r * t / 100;
    printf("simple interest = %.2f\n",si);
    ci = p * pow((1 + r / 100), t) - p;
    printf("compound interest = %.2f\n",ci);
    return 0;
}
