class Solution {
    public boolean isPerfectSquare(int num) {
        if (num == 0) return true;
        int left = 1, right = num, result = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (mid <= num / mid) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result * result == num;
    }
}