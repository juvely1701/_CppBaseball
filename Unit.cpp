#include <iostream>
#include "Unit.h"

void Unit::Move(int x, int y) {
    this->x = x; // 자기 자신(변수) 을 가리키는 포인터
    this->y = y;
}

void Unit::PrintLocation(){
    std::cout << this->x << ", " << this->y << std::endl;
}
