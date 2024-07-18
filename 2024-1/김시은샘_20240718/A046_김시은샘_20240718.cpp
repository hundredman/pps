#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<char, int> firstLetterCount;

    // 선수 성 입력 및 빈도 계산
    for (int i = 0; i < n; ++i) {
        string surname;
        cin >> surname;
        char firstLetter = surname[0];
        firstLetterCount[firstLetter]++;
    }

    // 5명 이상인 성의 첫 글자 수집
    set<char> result;
    for (const auto& pair : firstLetterCount) {
        if (pair.second >= 5) {
            result.insert(pair.first);
        }
    }

    // 결과 출력
    if (result.empty()) {
        cout << "PREDAJA" << endl;
    } else {
        for (char c : result) {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}