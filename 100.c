#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    while(str[length] != '\0')
    {
        length++;
    }

    printf("All substrings are:\n");

    // Starting position
    for(i = 0; i < length; i++)
    {
        // Ending position
        for(j = i; j < length; j++)
        {
            // Print characters from i to j
            for(k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }

    return 0;
}
