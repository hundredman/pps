class Solution {
    public String solution(String s) {
        StringBuilder sb = new StringBuilder();
        boolean isFirstChar = true;

        for (char ch : s.toCharArray()) {
            if (Character.isWhitespace(ch)) {
                isFirstChar = true;
                sb.append(ch);
            } else {
                if (isFirstChar) {
                    sb.append(Character.toUpperCase(ch));
                    isFirstChar = false;
                } else {
                    sb.append(Character.toLowerCase(ch));
                }
            }
        }

        return sb.toString();
    }
}