#include <stdio.h>

int main()
{
    char name[100];
    int i = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    // First character is the first initial
    if(name[0] != ' ' && name[0] != '\n')
    {
        printf("%c ", name[0]);
    }

    // Find characters that come after a space
    while(name[i] != '\0')
    {
        if(name[i] == ' ' &&
           name[i + 1] != ' ' &&
           name[i + 1] != '\0' &&
           name[i + 1] != '\n')
        {
            printf("%c ", name[i + 1]);
        }

        i++;
    }

    printf("\n");

    return 0;
}
