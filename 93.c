#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int freq[26] = {0};
    int i;
    int anagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Count characters of first string
    for(i = 0; str1[i] != '\0'; i++)
    {
        freq[str1[i] - 'a']++;
    }

    // Subtract characters of second string
    for(i = 0; str2[i] != '\0'; i++)
    {
        freq[str2[i] - 'a']--;
    }

    // Check frequency array
    for(i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            anagram = 0;
            break;
        }
    }

    if(anagram == 1)
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
