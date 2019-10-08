#include <iostream>
#include <cstdlib>
#include "Result.h"

using namespace std;

static const int DIGIT = 3;
static const int MAX_NUMBER = 10;

void printNumbers(const char* prefix, int* numbers) {
    cout << prefix << endl;
    for (int i = 0; i < DIGIT; ++i)
        cout << numbers[i] << ' ';
    cout << endl;
}

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

void inputGuesses(int* guesses){
    guesses[0] = 1;

    cout << "input : " << endl;

    for (int i = 0; i < DIGIT; ++i)
        cin >> guesses[i];

    printNumbers("[GUESS]", guesses);
}

void calculateResult(Result* result, const int* answers, const int* guesses){
    result->strike = 0;
    result->ball = 0;
    result->out = 0;

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
    cout << "[RESULT] S:" << result->strike << " B:" << result->ball << " O:" << result->out << endl;
}

int main() {
    // 1. 0~9 사이의 중복되지 않는 난수 3가지를 골라서 정답을 생성
    int answers[DIGIT];
    createAnswers(answers);

    int tryCount = 0;

    while (true) {
        tryCount++;

        // 2. 사용자로부터 3개의 숫자(추측)를 입력 받음
        int guesses[DIGIT];
        inputGuesses(guesses);

        // 3. 정답과 추측을 비교하여 결과 판정
        Result result;
        calculateResult(&result, answers, guesses);

        // 4. 결과를 화면에 출력
        printResult(&result);

        // 5. 추측이 결과와 다르면 2번 단계로 돌아가서 반복
        if (result.strike == DIGIT)// magic number, hard-coded number, 0/1 예외
            break;
    }

    // 6. 정답을 맞추는데 소요된 횟수를 출력하고 종료
    cout << "[COUNT] " << tryCount << endl;

    return 0;
}
