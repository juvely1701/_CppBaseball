#ifndef CPPBASEBALL_RESULT_H
#define CPPBASEBALL_RESULT_H

struct Result{
    int strike;
    int ball;
    int out;
};

Result* createResult();

void calculateResult(Result* result, const int* answers, const int* guesses);

void printResult(Result* result);

bool isCorrectAnswer(Result* result);
#endif //CPPBASEBALL_RESULT_H
