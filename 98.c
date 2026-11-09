#include <stdio.h>

int main()
{
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Find the last space
    for(i = 0; name[i] != '\0' && name[i] != '\n'; i++)
    {
        if(name[i] == ' ')
        {
            lastSpace = i;
        }
    }

    printf("Formatted name: ");

    // Print first name initial
    printf("%c ", name[0]);

    // Print initials of middle names
    for(i = 1; i < lastSpace; i++)
    {
        if(name[i] == ' ' && name[i + 1] != ' ')
        {
            printf("%c ", name[i + 1]);
        }
    }

    // Print surname completely
    for(i = lastSpace + 1;
        name[i] != '\0' && name[i] != '\n';
        i++)
    {
        printf("%c", name[i]);
    }

    printf("\n");

    return 0;
}
