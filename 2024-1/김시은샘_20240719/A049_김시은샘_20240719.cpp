#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// 모음인지 확인하는 함수
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

// 패스워드 유효성을 확인하는 함수
bool isValidPassword(const string& password) {
    bool hasVowel = false;
    int vowelCount = 0, consonantCount = 0;
    char prevChar = '\0';

    for (char c : password) {
        if (isVowel(c)) {
            hasVowel = true;
            vowelCount++;
            consonantCount = 0;
        } else {
            consonantCount++;
            vowelCount = 0;
        }

        // 모음이 3개 연속 또는 자음이 3개 연속
        if (vowelCount == 3 || consonantCount == 3) {
            return false;
        }

        // 같은 글자가 연속으로 두 번 오는 경우 (ee, oo는 예외)
        if (c == prevChar && c != 'e' && c != 'o') {
            return false;
        }

        prevChar = c;
    }

    // 모음이 하나도 없는 경우
    if (!hasVowel) {
        return false;
    }

    return true;
}

int main() {
    string password;
    while (true) {
        cin >> password;
        if (password == "end") break;

        if (isValidPassword(password)) {
            cout << "<" << password << "> is acceptable." << endl;
        } else {
            cout << "<" << password << "> is not acceptable." << endl;
        }
    }
    return 0;
}