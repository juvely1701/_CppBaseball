#include <iostream>
#include <cstdlib>
using namespace std;

int* take1()
{
    int ar[2];
    ar[0] = 1;
    ar[1] = 2;

    return ar;
}

int* take2()
{
    int size = rand() % 10 + 1;

    int* ar = (int*)malloc(sizeof(int) * size);
    for (int i = 0; i < size; ++i)
        ar[i] = i + 1;

    return ar;
}

void take4(int* ar){
    int size = rand() % 10 + 1;

    for (int i = 0; i < size; ++i)
        ar[i] = i + 1;
}

int main() {
    int* t1 = take1();
    cout << *(t1 + 0) << endl;

    int* t2 = take2();
    cout << *(t2 + 0) << endl;
    free(t2);

    int t4[10];
    take4(t4);
    cout << *(t4 + 0) << endl;


    return 0;
}
