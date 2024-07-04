import java.util.*;

class Solution {
    public int solution(int[] people, int limit) {
        Arrays.sort(people);
        int startIdx = 0, endIdx = people.length - 1, result = 0;

        while (startIdx <= endIdx) {
            if (people[startIdx] + people[endIdx] <= limit) {
                startIdx++;
            }
            endIdx--;
            result++;
        }

        return result;
    }
}