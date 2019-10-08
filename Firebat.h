#ifndef CPPBASEBALL_FIREBAT_H
#define CPPBASEBALL_FIREBAT_H


struct Firebat {
    int x;
    int y;

//    Marine* Marine_Create(int x, int y);
    // constructor
    Firebat(int x, int y);

    void Move(int x, int y);

    void PrintLocation();
};


#endif //CPPBASEBALL_FIREBAT_H
