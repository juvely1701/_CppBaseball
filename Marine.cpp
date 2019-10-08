#include <iostream>
#include <cstdlib>
#include "Marine.h"

Marine::Marine(int x, int y){
    this->x = x;
    this->y = y;
}

char *Marine::GetName() {
    return "Marine";
}
