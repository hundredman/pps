#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer; // 결과를 담을 벡터 선언

    // 주어진 배열을 순회하며 나누어 떨어지는 원소를 찾아 answer 벡터에 추가
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % divisor == 0) {
            answer.push_back(arr[i]);
        }
    }

    // answer 벡터가 비어있을 경우 -1을 추가하고, 아닐 경우 정렬을 수행
    if(answer.empty()) {
        answer.push_back(-1);
    } else {
        sort(answer.begin(), answer.end());
    }

    return answer; // 결과 벡터 반환
}