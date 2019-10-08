#include "ProtossUnit.h"

ProtossUnit::ProtossUnit(int x, int y) {
    this->x = x;
    this->y = y;
}

void ProtossUnit::GetAttacked(int damage) {
    while (shield > 0){
        shield--;
        damage--;
    }

    Unit::GetAttacked(damage);
}
