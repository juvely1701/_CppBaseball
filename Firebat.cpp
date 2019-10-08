#include <iostream>
#include <cstdlib>
#include "Firebat.h"

Firebat::Firebat(int x, int y) {
    this->x = x;
    this->y = y;
}

char *Firebat::GetName() {
    return "Firebat";
}

