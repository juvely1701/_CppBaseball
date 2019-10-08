#include <iostream>
#include <cstdlib>
#include "Firebat.h"

Firebat::Firebat(int x, int y) {
    this->x = x;
    this->y = y;
}

void Firebat::Move(int x, int y) {
    this->x = x; // 자기 자신(변수) 을 가리키는 포인터
    this->y = y;
}

void Firebat::PrintLocation(){
    std::cout << this->x << ", " << this->y << std::endl;
}
