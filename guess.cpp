#include <iostream>
#include "guess.h"
#include "number.h"
#include "constant.h"

using namespace std;

void inputGuesses(int* guesses){
    guesses[0] = 1;

    cout << "input : " << endl;

    for (int i = 0; i < DIGIT; ++i)
        cin >> guesses[i];

    printNumbers("[GUESS]", guesses);
}
