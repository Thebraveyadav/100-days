#include <stdio.h>

int main()
{
    int matrix[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    printf("Address of matrix[0][0] = %p\n", (void *)&matrix[0][0]);
    printf("Address of matrix[0][1] = %p\n", (void *)&matrix[0][1]);
    printf("Address of matrix[1][0] = %p\n", (void *)&matrix[1][0]);

    return 0;
}
