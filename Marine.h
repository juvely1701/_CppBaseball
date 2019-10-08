#ifndef CPPBASEBALL_MARINE_H
#define CPPBASEBALL_MARINE_H

#include "Unit.h"

class Marine : public Unit{
public:
    Marine(int x, int y);

    char* GetName();
};

#endif //CPPBASEBALL_MARINE_H
