#ifndef CPPBASEBALL_MARINE_H
#define CPPBASEBALL_MARINE_H

struct Marine{
    int x;
    int y;
};

Marine* Marine_Create(int x, int y);

void Marine_Move(Marine* marine, int x, int y);

void Marine_PrintLocation(Marine* marine);

void Marine_Destroy(Marine* marine);

#endif //CPPBASEBALL_MARINE_H
