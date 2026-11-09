#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, start, end;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        // Skip spaces
        if(str[i] == ' ' || str[i] == '\n')
        {
            i++;
            continue;
        }

        // Starting position of word
        start = i;

        // Find the end of word
        while(str[i] != ' ' &&
              str[i] != '\0' &&
              str[i] != '\n')
        {
            i++;
        }

        end = i - 1;

        // Reverse the word
        while(start < end)
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }
    }

    printf("Sentence after reversing each word:\n%s", str);

    return 0;
}
