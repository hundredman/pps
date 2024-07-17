class Solution {
public:
    bool checkRecord(string s) {
        int absentCount = 0;
        int lateCount = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == 'A') {
                absentCount++;
                if (absentCount > 1) {
                    return false; // 'A'가 2번 이상 나오면 false 반환
                }
            }

            if (s[i] == 'L') {
                lateCount++;
                if (lateCount > 2) {
                    return false; // 연속으로 'L'이 3번 이상 나오면 false 반환
                }
            } else {
                lateCount = 0; // 'L'이 아니면 연속 카운트 초기화
            }
        }

        return true; // 모든 조건을 만족하면 true 반환
    }
};