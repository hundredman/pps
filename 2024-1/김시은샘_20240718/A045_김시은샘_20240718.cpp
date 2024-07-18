#include <iostream>
#include <string>
#include <cctype>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    string word;
    cin >> word;

    // 대소문자를 구분하지 않으므로 모두 대문자로 변환
    transform(word.begin(), word.end(), word.begin(), ::toupper);

    unordered_map<char, int> frequency;
    int max_count = 0;
    char most_frequent_char = '?';

    // 알파벳 빈도 계산
    for (char ch : word) {
        frequency[ch]++;
        if (frequency[ch] > max_count) {
            max_count = frequency[ch];
            most_frequent_char = ch;
        }
    }

    // 가장 많이 사용된 알파벳이 여러 개인지 확인
    int count_max = 0;
    for (auto pair : frequency) {
        if (pair.second == max_count) {
            count_max++;
        }
        if (count_max > 1) {
            most_frequent_char = '?';
            break;
        }
    }

    cout << most_frequent_char << endl;
    return 0;
}