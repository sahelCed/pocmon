#ifndef MAP_H
#define MAP_H
#include "struct.h"

int **generateMapEmpty(int rows, int cols);
void displayMap(int **matrix, int rows, int cols);
int **spawPlayer(Player *player, int **matrix);
void refreshMatrix(Player *player, int **matrix, int rows, int cols);

#endif