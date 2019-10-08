#include <iostream>
#include <cstdlib>
#include "Marine.h"

Marine* Marine_Create(int x, int y) {
    Marine* marine = (Marine*) malloc(sizeof(Marine));
    marine->x = x;
    marine->y = y;

    return marine;
}

void Marine_Move(Marine* marine, int x, int y) {
    marine->x = x;
    marine->y = y;
}

void Marine_PrintLocation(Marine* marine){
    std::cout << marine->x << ", " << marine->y << std::endl;
}

void Marine_Destroy(Marine* marine){
    free(marine);
}

