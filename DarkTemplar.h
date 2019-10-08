#ifndef CPPBASEBALL_DARKTEMPLAR_H
#define CPPBASEBALL_DARKTEMPLAR_H


#include "Unit.h"
#include "ProtossUnit.h"

class DarkTemplar : public ProtossUnit{
public:
    DarkTemplar(int x, int y);

    void Cloak();
};


#endif //CPPBASEBALL_DARKTEMPLAR_H
