#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "core.h"

typedef struct SMario {
    float x, y;
} TMario;

#define mapWidth 80
#define mapHeight 30

char map[mapHeight][mapWidth+1];
TMario mario;

void ClearMap()
{
    for (int i = 0; i < mapWidth; i++)
        map[0][i] = '.';
    map[0][mapWidth-1] = '\0';
    for (int i = 1; i < mapHeight; i++)
        sprintf(map[i], map[0]);
}


void ShowMap()
{
    map[mapHeight-1][mapWidth-1] = '\0';
    for(int i = 0; i < mapHeight; i++)
        printf("%s\n", map[i]);
}

void SetCharPos(TMario* p_mario, float xPos, float yPos)
{
    (*p_mario).x = xPos;
    (*p_mario).y = yPos;
}

void PutCharOnMap(TMario mario)
{
    int ix = (int)round(mario.x);
    int iy = (int)round(mario.y);
    map[iy][ix] = '&';
}