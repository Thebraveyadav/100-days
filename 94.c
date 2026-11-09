#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;
    int currentLength = 0;
    int maxLength = 0;
    int start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        // If current character is part of a word
        if(str[i] != ' ' && str[i] != '\n')
        {
            if(currentLength == 0)
            {
                start = i;
            }

            currentLength++;
        }
        else
        {
            // Check if current word is the longest
            if(currentLength > maxLength)
            {
                maxLength = currentLength;
                maxStart = start;
            }

            currentLength = 0;
        }

        i++;
    }

    // Check last word
    if(currentLength > maxLength)
    {
        maxLength = currentLength;
        maxStart = start;
    }

    printf("Longest word: ");

    for(i = maxStart; i < maxStart + maxLength; i++)
    {
        printf("%c", str[i]);
    }

    printf("\nLength = %d\n", maxLength);

    return 0;
}