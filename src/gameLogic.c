#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define mapWidth 80
#define mapHeight 30
typedef struct SMario {
    float x, y;
} TMario;
// Реализация глобальной переменной mario
char map[mapHeight][mapWidth+1]; 
TMario mario;  // Определение переменной, объявленной в core.h

void clearMap()
{
    for (int i = 0; i < mapWidth; i++)
        map[0][i] = '.';
    map[0][mapWidth-1] = '\0';
    for (int i = 1; i < mapHeight; i++)
        sprintf(map[i], map[0]);
}

void showMap()
{
    map[mapHeight-1][mapWidth-1] = '\0';
    for(int i = 0; i < mapHeight; i++)
        printf("%s", map[i]);
}

void setCharPos(TMario* mario, float xPos, float yPos)
{
    mario->x = xPos;
    mario->y = yPos;
}

void putCharOnMap(TMario mario)
{
    int ix = (int)round(mario.x);
    int iy = (int)round(mario.y);
    map[iy][ix] = '&';
}
