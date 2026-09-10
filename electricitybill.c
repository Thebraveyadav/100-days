#include <stdio.h>
int main(){
    float unit, amount;

    printf("enter the number of units used: ");
    scanf("%f", &unit);

    if (unit <= 100){
        amount = unit * 5;
        printf("your electricity bill is: Rs.%f", amount);
    }
    else if(unit <= 200){
        amount = 100 * 5 + (unit - 100) * 7;
        printf("your electricity bill is: Rs.%f", amount);
    }
    else if(unit <= 300){
        amount = 100 * 5 + 100 * 7 + (unit - 200) * 10;
        printf("your electricity bill is: Rs.%f", amount);
    }
    else{
        amount = 100 * 5 + 100 * 7 + 100 * 10 + (unit - 300) * 12;
        printf("your electricity bill is: Rs.%.2f", amount);
    }
    return 0;
}