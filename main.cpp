#include <iostream>
#include <cstdlib>
using namespace std;

static const int DIGIT = 3;
static const int MAX_NUMBER = 10;

int main() {
    // 1. 0~9 사이의 중복되지 않는 난수 3가지를 골라서 정답을 생성
    int answer0;
    int answer1;
    int answer2;

    while (true) {
        answer0 = rand() % MAX_NUMBER;
        answer1 = rand() % MAX_NUMBER;
        answer2 = rand() % MAX_NUMBER;

        if (answer0 != answer1 && answer1 != answer2 && answer2 != answer0)
            break;
    }

    cout << "[ANSWER]" << endl;
    cout << answer0 << ' ';
    cout << answer1 << ' ';
    cout << answer2 << ' ';
    cout << endl;


    // 2. 사용자로부터 3개의 숫자(추측)를 입력 받음
    int tryCount = 0;

    while (true) {
        tryCount++;

        cout << "input : " << endl;

        int guess0;
        int guess1;
        int guess2;

        cin >> guess0;
        cin >> guess1;
        cin >> guess2;

        cout << "[GUESS]" << endl;
        cout << guess0 << ' ';
        cout << guess1 << ' ';
        cout << guess2 << ' ';
        cout << endl;

        // 3. 정답과 추측을 비교하여 결과 판정
        int strike = 0;
        int ball = 0;
        int out = 0;

        if (guess0 == answer0)
            strike++;
        else if (guess0 == answer1 || guess0 == answer2)
            ball++;
        else
            out++;

        if (guess1 == answer1)
            strike++;
        else if (guess1 == answer2 || guess1 == answer0)
            ball++;
        else
            out++;

        if (guess2 == answer2)
            strike++;
        else if (guess2 == answer0 || guess2 == answer1)
            ball++;
        else
            out++;

        // 4. 결과를 화면에 출력
        // [RESULT] S:1 B:2 O:0
        cout << "[RESULT] S:" << strike << " B:" << ball << " O:" << out << endl;

        // 5. 추측이 결과와 다르면 2번 단계로 돌아가서 반복
        if (strike == DIGIT)// magic number, hard-coded number, 0/1 예외
            break;
    }

    // 6. 정답을 맞추는데 소요된 횟수를 출력하고 종료
    cout << "[COUNT] " << tryCount << endl;

    return 0;
}