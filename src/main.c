#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "gameLogic.c"

int main()
{
    setCharPos(&mario, 20, 10);
    clearMap();
    putCharOnMap(mario);
    showMap();
    return 0;
}
