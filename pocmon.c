#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pocmon.h"

Pocmon createPocmon(char *name,int hp, int attack, int defense, int speed, char *type) {

    Pocmon *pocmon = malloc(sizeof(Pocmon));

    char *pocmonName = malloc(sizeof(char) * strlen(name));
    pocmon->name = malloc(sizeof(char) * strlen(name));
    strcpy(pocmon->name,name);

    printf("%ld \n",strlen(name));

    pocmon->hp = hp;

    pocmon->attack = attack;

    pocmon->defense = defense;

    pocmon->speed = speed;

    char *pocmonType = malloc(sizeof(char) * strlen(type) + 1);
    pocmon->type = malloc(sizeof(char) * strlen(type));
    strcpy(pocmon->type,type);

    return *pocmon;
}


