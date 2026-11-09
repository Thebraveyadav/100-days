#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;
    int i, j, k;
    int rotation = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Find length of first string
    while(str1[len1] != '\0')
    {
        len1++;
    }

    // Find length of second string
    while(str2[len2] != '\0')
    {
        len2++;
    }

    // Lengths must be equal
    if(len1 != len2)
    {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    // Try every possible rotation
    for(i = 0; i < len1; i++)
    {
        for(j = 0; j < len1; j++)
        {
            k = (i + j) % len1;

            if(str1[k] != str2[j])
            {
                break;
            }
        }

        if(j == len1)
        {
            rotation = 1;
            break;
        }
    }

    if(rotation == 1)
    {
        printf("The strings are rotations of each other.\n");
    }
    else
    {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}
