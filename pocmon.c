#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pocmon.h"

Pocmon createPocmon(char *name, int hp, int attack, int defense, int speed, char *type)
{

    Pocmon *pocmon = malloc(sizeof(Pocmon));

    char *pocmonName = malloc(sizeof(char) * strlen(name));
    pocmon->name = malloc(sizeof(char) * strlen(name));
    strcpy(pocmon->name, name);

    printf("%ld \n", strlen(name));

    pocmon->hp = hp;

    pocmon->attack = attack;

    pocmon->defense = defense;

    pocmon->speed = speed;

    char *pocmonType = malloc(sizeof(char) * strlen(type) + 1);
    pocmon->type = malloc(sizeof(char) * strlen(type));
    strcpy(pocmon->type, type);

    return *pocmon;
}

Pocmon *initPocmon()
{
    Pocmon *pocmons = malloc(sizeof(Pocmon) * 11);
    FILE *f = fopen("pocmon.csv", "r");
    char str1[20], str2[20];
    int hp;
    int speed;
    int attack;
    int defense;

    if (f != NULL)
    {
        char str1[100], str2[20];
        int hp;
        int attack;
        int defense;
        int speed;
        FILE *fp;

        fp = fopen("pocmon.csv", "rb");

        fseek(fp, 0, SEEK_END);
        int nbChar = ftell(fp);

        char content[nbChar];
        int index = 0;
        int nbLine = 0;

        char ch = fgetc(fp);

        printf("%ld \n", ftell(fp));
        fclose(fp);
    }
    else
    {
        printf("ced \n");
    }

    return pocmons;
}
