#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // 비교 함수: 두 번째 값을 기준으로 내림차순 정렬
        auto compare = [](const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1];
        };

        // 2차원 벡터 정렬
        sort(boxTypes.begin(), boxTypes.end(), compare);

        int unit = 0;
        for(const auto& box : boxTypes) {
            if(truckSize <= 0) break; // 트럭에 더 이상 공간이 없으면 종료
            int boxesToTake = min(box[0], truckSize); // 트럭에 담을 수 있는 상자 수 계산
            unit += boxesToTake * box[1]; // 상자의 단위 수 계산
            truckSize -= boxesToTake; // 트럭의 남은 용량 갱신
        }

        return unit;
    }
};