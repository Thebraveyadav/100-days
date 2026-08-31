#include <stdio.h>
int main(){
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ( ch >= 'A' && ch <= 'Z')
       {
        printf("Entered character is in upper case.\n");
       }
    else if (ch >= 'a' && ch <= 'z')
       {
        printf("Entered character is in lower case.\n");
       }
    else if (ch >= '0' && ch <= '9')
       {
        printf("Entered character is an integer.\n");
       }
    else
       {
        printf("Entered character is a special character.\n");
       }    
    return 0;
    }