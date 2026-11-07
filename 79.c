#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols;
    int i, j, d;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");

    // Read matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    // d represents the diagonal number
    for(d = 0; d < rows + cols - 1; d++)
    {
        for(i = 0; i < rows; i++)
        {
            j = d - i;

            if(j >= 0 && j < cols)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}