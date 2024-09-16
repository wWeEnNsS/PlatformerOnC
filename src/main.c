#include <stdio.h>
#include <stdlib.h>
#include "gameLogic.c"
#include "core.h"
int main()
{
    SetCharPos(&mario, 20, 10);
    ClearMap();
    PutCharOnMap(mario);
    ShowMap();
    return 0;
}
