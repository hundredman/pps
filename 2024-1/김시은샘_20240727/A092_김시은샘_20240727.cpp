class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int i = 0; // 짝수 인덱스를 추적하는 포인터
        int j = 1; // 홀수 인덱스를 추적하는 포인터

        // 배열의 끝까지 순회
        while (i < n && j < n) {
            // 짝수 인덱스의 숫자가 짝수인지 확인
            if (nums[i] % 2 == 0) {
                i += 2; // 맞다면 다음 짝수 인덱스로 이동
            }
            // 홀수 인덱스의 숫자가 홀수인지 확인
            else if (nums[j] % 2 == 1) {
                j += 2; // 맞다면 다음 홀수 인덱스로 이동
            }
            // 짝수 인덱스의 숫자가 홀수이고, 홀수 인덱스의 숫자가 짝수일 경우
            else {
                swap(nums[i], nums[j]); // 두 숫자를 교환
                i += 2; // 다음 짝수 인덱스로 이동
                j += 2; // 다음 홀수 인덱스로 이동
            }
        }

        return nums; // 정렬된 배열 반환
    }
};