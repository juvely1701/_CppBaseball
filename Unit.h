#ifndef CPPBASEBALL_UNIT_H
#define CPPBASEBALL_UNIT_H


class Unit {
protected:
    int x;
    int y;
    int hp = 5;

public:
    virtual void Move(int x, int y); // overridable

    void PrintLocation();

    void PrintHP();

    virtual void GetAttacked(int damage);

    // abstract method
    virtual char* GetName() = 0;

    // 추상 메서드 : 구현이 없는 메서드. 자식 클래스에서 반드시 구현하여야 함
    // 추상 클래스 : 추상 메서드가 하나라도 있는 클래스
    // 인터페이스 : 추상 메서드로만 이루어진 클래스 (멤버변수X, 구상 메서드X)
};


#endif //CPPBASEBALL_UNIT_H
