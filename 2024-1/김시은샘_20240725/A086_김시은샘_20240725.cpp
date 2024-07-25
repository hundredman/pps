#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// 숫자를 영어 단어로 변환하는 함수
std::string number_to_words(int num) {
    std::string result;
    std::string digits[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (num >= 10) {
        result += digits[num / 10] + " ";
    }
    result += digits[num % 10];
    return result;
}

int main() {
    int M, N;
    std::cin >> M >> N;

    // 숫자와 해당 숫자의 영어 단어로 이루어진 쌍을 저장할 벡터
    std::vector<std::pair<int, std::string>> numbers;

    // M부터 N까지의 숫자들을 벡터에 추가
    for (int i = M; i <= N; ++i) {
        numbers.push_back({i, number_to_words(i)});
    }

    // 영어 단어 기준으로 정렬
    std::sort(numbers.begin(), numbers.end(), [](const std::pair<int, std::string>& a, const std::pair<int, std::string>& b) {
        return a.second < b.second;
    });

    // 정렬된 결과를 출력, 한 줄에 10개씩
    int count = 0;
    for (const auto& number : numbers) {
        std::cout << number.first << " ";
        if (++count % 10 == 0) {
            std::cout << std::endl;
        }
    }
    // 마지막 줄의 개행 처리
    if (count % 10 != 0) {
        std::cout << std::endl;
    }

    return 0;
}