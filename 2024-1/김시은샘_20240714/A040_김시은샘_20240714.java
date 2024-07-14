class Solution {
    public boolean halvesAreAlike(String s) {
        String vowel = "aeiouAEIOU";

        int count = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            char c = s.charAt(i);
            if (vowel.indexOf(c) != -1) {
                if (i < n / 2) {
                    count++;
                } else {
                    count--;
                }
            }
        }

        return count == 0;
    }
}