#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int>> failure_rates;

    // 스테이지 번호는 1부터 N까지 존재
    for (int stage = 1; stage <= N; ++stage) {
        int total_players = 0; // 스테이지에 도달한 플레이어 수
        int fail_players = 0;  // 스테이지를 클리어하지 못한 플레이어 수

        // stages 배열을 돌면서 해당 스테이지에 도달한 플레이어 수와 클리어하지 못한 플레이어 수를 계산
        for (int player_stage : stages) {
            if (player_stage >= stage) {
                total_players++;
                if (player_stage == stage) {
                    fail_players++;
                }
            }
        }

        // 스테이지에 도달한 플레이어가 없는 경우 실패율은 0으로 처리
        double failure_rate = (total_players == 0) ? 0 : (double)fail_players / total_players;

        // 실패율과 스테이지 번호를 pair로 저장
        failure_rates.push_back({ failure_rate, stage });
    }

    // 실패율을 기준으로 내림차순 정렬, 실패율이 같으면 스테이지 번호 오름차순 정렬
    sort(failure_rates.begin(), failure_rates.end(), [](const pair<double, int>& a, const pair<double, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second; // 스테이지 번호 오름차순
        }
        return a.first > b.first; // 실패율 내림차순
    });

    // 정렬된 결과에서 스테이지 번호만 추출하여 answer에 저장
    for (auto& pair : failure_rates) {
        answer.push_back(pair.second);
    }

    return answer;
}