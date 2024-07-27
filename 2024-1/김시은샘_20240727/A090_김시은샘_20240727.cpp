class Solution {
public:
    // 배열에서 중복을 제거하고 고유한 요소의 개수를 반환하는 함수
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // 배열이 비어있는 경우 0을 반환

        int uniqueCount = 1; // 첫 번째 요소는 항상 고유하므로 1로 시작
        for (int i = 1; i < nums.size(); i++) { // 배열의 두 번째 요소부터 순회
            if (nums[i] != nums[i - 1]) { // 현재 요소가 이전 요소와 다른 경우
                nums[uniqueCount] = nums[i]; // 고유한 요소를 업데이트
                uniqueCount++; // 고유한 요소의 개수를 증가
            }
        }
        return uniqueCount; // 고유한 요소의 총 개수를 반환
    }
};