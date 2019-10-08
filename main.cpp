#include <iostream>
#include <cstdlib>
using namespace std;

static const int DIGIT = 3;
static const int MAX_NUMBER = 10;

int main() {
    // 1. 0~9 사이의 중복되지 않는 난수 3가지를 골라서 정답을 생성
    int answers[DIGIT];

    while (true) {
        for (int i = 0; i < DIGIT; ++i)
            answers[i] = rand() % MAX_NUMBER;

        //TODO : 까다로우니까 나중에 검토
        if (answers[0] != answers[1] && answers[1] != answers[2] && answers[2] != answers[0])
            break;
    }

    cout << "[ANSWER]" << endl;
    for (int i = 0; i < DIGIT; ++i)
        cout << answers[i] << ' ';
    cout << endl;


    // 2. 사용자로부터 3개의 숫자(추측)를 입력 받음
    int tryCount = 0;

    while (true) {
        tryCount++;

        cout << "input : " << endl;

        int guesses[DIGIT];

        for (int i = 0; i < DIGIT; ++i)
            cin >> guesses[i];

        cout << "[GUESS]" << endl;
        for (int i = 0; i < DIGIT; ++i)
            cout << guesses[i] << ' ';
        cout << endl;

        // 3. 정답과 추측을 비교하여 결과 판정
        int strike = 0;
        int ball = 0;
        int out = 0;

        for (int i = 0; i < DIGIT; ++i){
            int j = (i + 1) % DIGIT;
            int k = (i + 2) % DIGIT;

            if (guesses[i] == answers[i])
                strike++;
            else if (guesses[i] == answers[j] || guesses[i] == answers[k])
                ball++;
            else
                out++;
        }


        if (guesses[1] == answers[1])
            strike++;
        else if (guesses[1] == answers[2] || guesses[1] == answers[0])
            ball++;
        else
            out++;

        if (guesses[2] == answers[2])
            strike++;
        else if (guesses[2] == answers[0] || guesses[2] == answers[1])
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