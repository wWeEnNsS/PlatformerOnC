#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define mapWidth 80
#define mapHeight 25
typedef struct SMario {
    float x, y;
    float width, height;
} TMario;
// Реализация глобальной переменной mario
char map[mapHeight][mapWidth+1]; 
TMario mario;  // Определение переменной, объявленной в core.h

void clearMap()
{
    for (int i = 0; i < mapWidth; i++)
        map[0][i] = '.';
    map[0][mapWidth] = '\0';
    for (int j = 1; j < mapHeight; j++)
        sprintf(map[j], map[0]);
}

void showMap()
{
	map[mapHeight - 1][mapWidth - 1] = '\0';
	for (int j = 0; j < mapHeight; j++)
		printf("%s \n", map[j]);
}

void setCharPos(TMario* mario, float xPos, float yPos)
{
    (*mario).x = xPos;
    (*mario).y = yPos;
}

void initChar(TMario* mario, float xPos, float yPos, float oWidth, float oHeight)
{
    setCharPos(mario, xPos, yPos);
    (*mario).width = oWidth;
    (*mario).height = oHeight;    
}

void putCharOnMap(TMario mario)
{
    int ix = (int)round(mario.x);
    int iy = (int)round(mario.y);
    int iWidth = (int)round(mario.width);
    int iHeight = (int)round(mario.height);
    for (int i = ix; i < (ix + iWidth); i++)
    {
        for (int j = iy; j < (iy + iHeight); j++)
        {
            map[j][i] = '@';
        }
    }
}
