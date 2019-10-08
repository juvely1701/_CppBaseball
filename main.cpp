#include <iostream>
#include <cstdlib>
#include "Result.h"
#include "constant.h"
#include "answer.h"
#include "guess.h"

using namespace std;

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
        Result* result = createResult();
        calculateResult(result, answers, guesses);

        // 4. 결과를 화면에 출력
        printResult(result);

        // 5. 추측이 결과와 다르면 2번 단계로 돌아가서 반복
        if (isCorrectAnswer(result))// SoC (Separation of Concern)
        {
            delete result;
            break;
        }

        delete result;
    }

    // 6. 정답을 맞추는데 소요된 횟수를 출력하고 종료
    cout << "[COUNT] " << tryCount << endl;

    return 0;
}
