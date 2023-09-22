#include "struct.h"
#include <stdio.h>

Player *move(Player *player,char direction) {
    switch (direction)
    {
    case 'z':
        // player->lastX = player->x;
        player->x -= 1;

        break;
    case 's':
        // player->lastX = player->x;
        player->x += 1;
        break;
    case 'q':
        // player->lastY = player->y;
        player->y -= 1;
        break;
    case 'd':
        // player->lastY = player->y;
        player->y += 1;
        break;
    default:
        printf("touche incorrect \n");
        break;
    }

    return player;
}