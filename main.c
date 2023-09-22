#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "struct.h"
#include "player.h"

int main()
{
    int rows = 30;
    int cols = 25;
    int **newMap = generateMapEmpty(rows, cols);
    Player *player = malloc(sizeof(Player) * 1);

    player->x = 15;
    player->y = 10;
    player->lastX = 15;
    player->lastY = 10;

    spawPlayer(player, newMap);
    displayMap(newMap, rows, cols);
    // refreshMatrix(player, newMap, rows, cols);
    int firstInit = 1;
    char direction;
    char *input;

    while (1)
    {
        if(firstInit == 0){
            refreshMatrix(player, newMap, rows, cols);
        }
        printf("Entrez une direction : ");
        fflush(stdin);
        direction = fgetc(stdin);
        firstInit = 0;
        move(player, direction);
    }

    return 0;
}