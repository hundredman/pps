#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

// 그룹 단어인지 확인하는 함수
bool isGroupWord(const string& word) {
    unordered_set<char> seen; // 이미 등장한 문자를 저장하는 집합
    char prev_char = '\0';    // 이전 문자를 저장

    for (char ch : word) {
        // 현재 문자가 이전 문자와 다르고, 이미 등장한 적이 있다면 그룹 단어가 아님
        if (ch != prev_char) {
            if (seen.find(ch) != seen.end()) {
                return false;
            }
            seen.insert(ch);
        }
        prev_char = ch; // 현재 문자를 이전 문자로 업데이트
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int groupWordCount = 0;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        if (isGroupWord(word)) {
            ++groupWordCount;
        }
    }

    cout << groupWordCount << endl;

    return 0;
}