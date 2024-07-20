#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numCases;
    cin >> numCases;
    vector<string> testCases(numCases);

    // 테스트 케이스 입력 받기
    for (int i = 0; i < numCases; i++) {
        cin >> testCases[i];
    }

    // 각 테스트 케이스마다 점수 계산
    for (const string& testCase : testCases) {
        int score = 0;
        int currentStreak = 0;

        for (char result : testCase) {
            if (result == 'O') {
                currentStreak++;
                score += currentStreak;
            } else {
                currentStreak = 0;
            }
        }

        cout << score << endl;
    }

    return 0;
}