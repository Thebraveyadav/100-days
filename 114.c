#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k;
    int length = 0;
    int maxLength = 0;
    int repeat;

    printf("Enter string: ");
    scanf("%s", str);

    // Find string length
    while(str[length] != '\0')
    {
        length++;
    }

    for(i = 0; i < length; i++)
    {
        for(j = i; j < length; j++)
        {
            repeat = 0;

            // Check whether str[j] already exists
            // between i and j-1
            for(k = i; k < j; k++)
            {
                if(str[k] == str[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if(repeat == 1)
            {
                break;
            }

            if(j - i + 1 > maxLength)
            {
                maxLength = j - i + 1;
            }
        }
    }

    printf("Length of longest substring = %d\n", maxLength);

    return 0;
}

