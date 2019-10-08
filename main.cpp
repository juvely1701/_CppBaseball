#include <iostream>
#include <cstdlib>

using namespace std;

struct Marine{
    int x;
    int y;
};

Marine* Marine_Create(int x, int y) {
    Marine* marine = (Marine*) malloc(sizeof(Marine));
    marine->x = x;
    marine->y = y;

    return marine;
}

void Marine_Move(Marine* marine, int x, int y) {
    marine->x = x;
    marine->y = y;
}

void Marine_PrintLocation(Marine* marine){
    cout << marine->x << ", " << marine->y << endl;
}

void Marine_Destroy(Marine* marine){
    free(marine);
}

int main() {
    Marine* m1 = Marine_Create(1,2);
    Marine_Move(m1, 10, 20);
    Marine_PrintLocation(m1);
    Marine_Destroy(m1);

    return 0;
}
