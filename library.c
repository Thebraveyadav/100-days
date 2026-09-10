#include <stdio.h>
int main(){
    int days, fine;
    printf("Enter the number of days: ");
    scanf("%d", &days);

if(days <= 0 ){
    printf("you don't need to pay fine.");
}
else if( days <= 5 ){
    fine = days * 2;
    printf("your fine is: Rs.%d", fine);
    }
else if( days <= 10){
    fine = (5 * 2) + ((days - 5) * 4);
    printf("your fine is: Rs.%d", fine);
    }
else if( days <= 30){
    fine = ( 5 * 2) + ( 5 * 4) + ((days - 10) * 6);
    printf("your fine is: Rs.%d", fine);
    }
else{
    printf("membership cancelled");
    }  
    return 0; 
}



