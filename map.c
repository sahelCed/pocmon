#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int **generateMapEmpty(int rows, int cols)
{
    int **matrix = malloc(sizeof(int *) * rows);
    for (int i = 0; i < rows; i++)
    {
        int *col = calloc(cols, sizeof(int));
        matrix[i] = col;
    }

    return matrix;
}

void displayMap(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

int **spawPlayer(Player *player, int **matrix)
{
    matrix[player->x][player->y] = 1;

    return matrix;
}

void refreshMatrix(Player *player, int **matrix, int rows, int cols)
{
    for (int i = i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }

    spawPlayer(player, matrix);
    // matrix[player->lastX][player->lastY] = 0;

    displayMap(matrix, rows, cols);
}
