class Solution {
public:
    // nums 배열에서 val 값을 제거하고 val이 아닌 요소의 개수를 반환하는 함수
    int removeElement(vector<int>& nums, int val) {
        int i = 0; // val이 아닌 요소를 추적하는 인덱스

        // nums 배열의 모든 요소를 순회
        for (const int num : nums)
            if (num != val) // 현재 요소가 val과 다르면
                nums[i++] = num; // 해당 요소를 앞쪽으로 이동시키고 인덱스 증가

        return i; // val이 아닌 요소의 총 개수를 반환
    }
};