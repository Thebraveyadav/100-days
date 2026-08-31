#include <stdio.h>
    int main() {
    int m;
printf("Enter the score in percentage: ");
scanf("%d", &m);
if(m >= 90 && m <= 100)
    {   
         printf("pupil scored A grade.");
    }
else if(m >= 80 && m <= 89)
    {
        printf("pupil scored B grade.");
    }
else if(m >= 70 && m <= 79)
    {
        printf("pupil scored C grade.");
    }
else if(m >= 60 && m <= 69)
    {
        printf("pupil scored D grade.");
    }
else
    {
        printf("pupil scored F grade.");
    }
return 0;
}