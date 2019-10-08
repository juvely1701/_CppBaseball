#include <iostream>
#include "number.h"
#include "constant.h"

using namespace std;

void printNumbers(const char* prefix, int* numbers) {
    cout << prefix << endl;
    for (int i = 0; i < DIGIT; ++i)
        cout << numbers[i] << ' ';
    cout << endl;
}
