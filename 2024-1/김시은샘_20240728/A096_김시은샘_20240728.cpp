class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n) {
            n &= (n - 1); // 최하위의 1 비트를 제거
            count++;
        }
        return count;
    }
};