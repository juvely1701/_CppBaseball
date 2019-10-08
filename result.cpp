#include <iostream>
#include "Result.h"
#include "constant.h"

Result* createResult(){
//    Result* result = (Result*)malloc(sizeof(Result));
    Result* result = new Result();
    result->strike = 0;
    result->ball = 0;
    result->out = 0;

    return result;
}

void calculateResult(Result* result, const int* answers, const int* guesses){
    for (int i = 0; i < DIGIT; ++i){
        int j = (i + 1) % DIGIT;
        int k = (i + 2) % DIGIT;

        if (guesses[i] == answers[i])
            result->strike++;
        else if (guesses[i] == answers[j] || guesses[i] == answers[k])
            result->ball++;
        else
            result->out++;
    }
}

void printResult(Result* result){
    std::cout << "[RESULT] S:" << result->strike << " B:" << result->ball << " O:" << result->out << std::endl;
}

bool isCorrectAnswer(Result* result) {
    return result->strike == DIGIT;
}
