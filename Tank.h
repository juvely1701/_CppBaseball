#ifndef CPPBASEBALL_TANK_H
#define CPPBASEBALL_TANK_H

#include "Unit.h"

class Tank : public Unit{
private:
    bool isSeiged;

public:
    Tank(int x, int y);

    void Move(int x, int y);
};


#endif //CPPBASEBALL_TANK_H
