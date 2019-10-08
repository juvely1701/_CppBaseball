#ifndef CPPBASEBALL_UNIT_H
#define CPPBASEBALL_UNIT_H


class Unit {
protected:
    int x;
    int y;

public:
    virtual void Move(int x, int y); // overridable

    void PrintLocation();
};


#endif //CPPBASEBALL_UNIT_H
