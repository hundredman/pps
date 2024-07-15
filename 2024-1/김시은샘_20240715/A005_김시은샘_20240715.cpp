#include <string>
#include <vector>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0; // 정답을 담을 변수 초기화

    // 각 skill_tree에 대해 반복
    for (const auto& skill_tree : skill_trees) {
        bool possible = true; // 스킬 순서를 만족하는지 여부를 나타내는 변수
        int idx = 0; // skill의 인덱스를 나타내는 변수

        // 각 스킬을 순회하며 순서를 확인
        for (char s : skill_tree) {
            // skill에 포함된 스킬인 경우
            if (skill.find(s) != string::npos) {
                // 현재 스킬이 예상 순서와 다르면 순서 불가능
                if (s != skill[idx]) {
                    possible = false;
                    break;
                } else {
                    idx++; // 다음 예상 스킬로 인덱스 증가
                }
            }
        }

        // 가능한 스킬 순서일 경우 정답 카운트 증가
        if (possible) {
            answer++;
        }
    }

    return answer; // 최종 정답 반환
}