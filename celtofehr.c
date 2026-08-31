#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("temperature in celsius=");
    scanf("%f", &celsius);
    fahrenheit = (celsius *9 / 5) +32;
    printf("temperature in fahrenheit = %f\n", fahrenheit);
    return 0;
}

