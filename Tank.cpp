#include "Tank.h"

Tank::Tank(int x, int y) {
    this->x = x;
    this->y = y;
}

 void Tank::Move(int x, int y) {
    if (isSeiged) {
        this->x = x; // 자기 자신(변수) 을 가리키는 포인터
        this->y = y;
    }
}
