#include <stdio.h>
int main(){

    float cp, sp, profit, loss, percent;

    printf("Enter the cost price: ");
    scanf("%f", &cp);

     printf("Enter the selling price: ");
     scanf("%f", &sp);

    if(sp > cp){
        profit = sp - cp;
        percent = (profit / cp) * 100;
        printf("profit = %.2f\n", profit);
        printf("profit percentage = %.2f%%", percent);
    }
    else{
        loss = cp - sp;
        percent = (loss / cp) * 100;
        printf("loss = %.2f\n", loss);
        printf("loss percentage = %.2f%%", percent);
    }
return 0;

}