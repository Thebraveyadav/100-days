#include <stdio.h>
int main(){
    int month;
    
    printf("Enter a number from 1 - 12: ");
    scanf("%d", &month);

    switch (month){

        case 1: 
            printf("the month is January.");
            break;
            
        case 2:
            printf("the month is february.");
            break;

        case 3:
            printf("The month is march.");
            break;

        case 4:
            printf("the month is april.");
            break;

        case 5:
            printf("the month is may.");
            break;
        
        case 6:
            printf("the month is june.");
            break;

        case 7:
            printf("the month is july.");
            break;

        case 8:
            printf("the month is august.");
            break;

        case 9:
            printf("the month is september.");
            break;

        case 10:
            printf("the month is october");
            break;

        case 11:
            printf("the month is november.");
            break;

        case 12:
            printf("the month is december.");
            break;

         default:
            printf("The given input is invalid.");
    }
        return 0;
    }




