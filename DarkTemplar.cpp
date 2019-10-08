#include <iostream>
#include "DarkTemplar.h"

DarkTemplar::DarkTemplar(int x, int y) {
    this->x = x;
    this->y = y;
}

void DarkTemplar::Cloak() {
    std::cout << "cloaked" << std::endl;
}
