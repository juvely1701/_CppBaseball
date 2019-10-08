#ifndef CPPBASEBALL_PROTOSSUNIT_H
#define CPPBASEBALL_PROTOSSUNIT_H


#include "Unit.h"

class ProtossUnit : public Unit{
private:
    int shield = 2;

public:
    ProtossUnit(int x, int y);

    void GetAttacked(int damage);
};


#endif //CPPBASEBALL_PROTOSSUNIT_H
