#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

// 숫자들의 합을 계산하는 함수
int sum_of_digits(const std::string& s) {
    int sum = 0;
    for (char ch : s) {
        if (isdigit(ch)) {
            sum += ch - '0';
        }
    }
    return sum;
}

// 사용자 정의 정렬 기준
bool compare(const std::string& a, const std::string& b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    int sum_a = sum_of_digits(a);
    int sum_b = sum_of_digits(b);
    if (sum_a != sum_b) {
        return sum_a < sum_b;
    }
    return a < b;
}

int main() {
    int N;
    std::cin >> N;
    std::vector<std::string> serials(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> serials[i];
    }

    std::sort(serials.begin(), serials.end(), compare);

    for (const std::string& serial : serials) {
        std::cout << serial << std::endl;
    }

    return 0;
}