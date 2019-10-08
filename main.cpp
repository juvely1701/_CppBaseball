#include <iostream>
#include <cstdlib>
#include "Marine.h"
#include "Firebat.h"

using namespace std;


int main() {
    Marine* m1 = Marine_Create(1,2);
    Marine_Move(m1, 10, 20);
    Marine_PrintLocation(m1);
    Marine_Destroy(m1);

    // variable -> member variable / field
    // function -> method
    Firebat* f1 = new Firebat(1, 2); // 1000
    Firebat* f2 = new Firebat(3, 4); // 2000
    f1->Move(10, 20); // Firebat_Move(f1, 10, 20);
    f2->Move(30, 40);

    f1.
    f1->x = -100;



    f1->PrintLocation(); // Firebat_PrintLocation(f1);
    delete f1; // Firebat_Destroy(f1);
    delete f2; // Firebat_Destroy(f1);

    return 0;
}
