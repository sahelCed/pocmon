#include <stdio.h>
#include <stdlib.h>

int **generateMapEmpty(int rows, int cols)
{
    int **matrix = malloc(sizeof(int *) * rows);
    for (int i = 0; i < rows; i++)
    {
        int *col = calloc(cols, sizeof(int));
        matrix[i] = col;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    return matrix;
}