#include <iostream>
#include <cstdlib>
#include "Marine.h"
#include "Firebat.h"
#include "DarkTemplar.h"
#include "Tank.h"

// 객체 == 개체 == 인스턴스 == 변수
// 클래스 == 타입

using namespace std;

// override 이름과 시그치너가 같은 부모 클래스의 메서드의 동작을 다시 정의

// overload 이름은 같고 시그니처가 다른 함수를 만들 수 있음. override 와는 다르다는.
// Unit으로 추상화되었음
void goAndCome(Unit* marine, int x, int y){
    marine->Move(x, y);
    marine->Move(1, 1);
}

int main() {

    Unit* units[3];
    units[0] = new Marine(1,2);
    units[1] = new Firebat(1,2);
    units[2] = new DarkTemplar(1,2);

//    for (int i = 0; i < 3; ++i)
//        units[i]->Move(3, 4);
//
//    for (int i = 0; i < 3; ++i)
//        units[i]->PrintLocation();

    for (int i = 0; i < 3; ++i)
        units[i]->GetAttacked(3);

    for (int i = 0; i < 3; ++i)
        units[i]->PrintHP();

    for (int i = 0; i < 3; ++i)
        cout << "I am " << units[i]->GetName() << endl;

    return 0;
}
