#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = s.length(); // 초기값은 문자열 전체 길이로 설정

    // i는 단위 길이
    for (int i = 1; i <= s.length() / 2; ++i) {
        string compressed = ""; // 압축된 문자열
        string prev = s.substr(0, i); // 첫 번째 부분 문자열
        int count = 1; // 연속되는 부분 문자열 개수

        // 단위 i로 자른 문자열을 비교
        for (int j = i; j < s.length(); j += i) {
            string sub = s.substr(j, i); // i 길이의 부분 문자열

            // 이전 문자열과 같으면 count 증가
            if (prev == sub) {
                count++;
            } else {
                // 다르면 압축된 문자열에 추가
                if (count > 1) {
                    compressed += to_string(count);
                }
                compressed += prev;
                prev = sub; // 다음 부분 문자열로 초기화
                count = 1; // count 초기화
            }
        }

        // 남은 문자열 처리
        if (count > 1) {
            compressed += to_string(count);
        }
        compressed += prev;

        // 가장 짧은 압축 문자열 길이 갱신
        if (compressed.length() < answer) {
            answer = compressed.length();
        }
    }

    return answer;
}