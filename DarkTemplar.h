#ifndef CPPBASEBALL_DARKTEMPLAR_H
#define CPPBASEBALL_DARKTEMPLAR_H


#include "Unit.h"

class DarkTemplar : public Unit{
private:
    int hp;

public:
    DarkTemplar(int x, int y);

    void Cloak();
};


#endif //CPPBASEBALL_DARKTEMPLAR_H
