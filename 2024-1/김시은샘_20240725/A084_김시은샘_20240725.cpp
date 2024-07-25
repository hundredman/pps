#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::string S;
    std::cin >> S;

    std::vector<std::string> suffixes;

    // 모든 접미사들을 추출합니다.
    for (size_t i = 0; i < S.size(); ++i) {
        suffixes.push_back(S.substr(i));
    }

    // 접미사들을 사전순으로 정렬합니다.
    std::sort(suffixes.begin(), suffixes.end());

    // 정렬된 접미사들을 출력합니다.
    for (const std::string& suffix : suffixes) {
        std::cout << suffix << std::endl;
    }

    return 0;
}