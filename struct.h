#ifndef STRUCT_H
#define STRUCT_H
typedef struct
{
    char *name;
    int hp;
    int attack;
    int defense;
    int speed;
    char *type;
} Pocmon;

typedef struct
{
    int x;
    int y;
    int lastX;
    int lastY;

} Player;

#endif
