#include <stdio.h>
#include <math.h>
    int main(){
        float a, b, c, D, r1, r2;

        printf("Enter the values of a, b, c: ");
        scanf("%f %f %f", &a, &b, &c);

        D = ( b * b) - (4 * a * c);
        if (D > 0){
            r1 = - b + sqrt(D) / ( 2 * a );
            r2 = - b - sqrt(D) / ( 2 * a );

            printf("the roots of equation are real and distinct and are : %f %f", r1, r2);
        }
        else if ( D = 0)
        {
            r1 = - b / ( 2 * a );
            printf("the roots of equation are real and equal and are : %f %f", r1, r1);
        }
        else
        {
            printf("the roots of equation are complex and imaginary.");
        }
        return 0;
        }







    