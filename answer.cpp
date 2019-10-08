#include <cstdlib>
#include "answer.h"
#include "constant.h"
#include "number.h"

void createAnswers(int* answers){
    while (true) {
        for (int i = 0; i < DIGIT; ++i)
            answers[i] = rand() % MAX_NUMBER;

        //TODO : 까다로우니까 나중에 검토
        if (answers[0] != answers[1] && answers[1] != answers[2] && answers[2] != answers[0])
            break;
    }

    printNumbers("[ANSWER]", answers);
}