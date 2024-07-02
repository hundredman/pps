class Solution {
    boolean solution(String s) {
        boolean answer = true;
        int count = 0;

        for(char c : s.toLowerCase().toCharArray()) {
            if(c == 'p') count++;
            else if (c == 'y') count--;
        }

        if(count != 0) answer = false;

        return answer;
    }
}