#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "gameLogic.c"

int main()
{
    initChar(&mario, 39, 10, 3, 3);
    clearMap();
    putCharOnMap(mario);
    showMap();
    return 0;
}
