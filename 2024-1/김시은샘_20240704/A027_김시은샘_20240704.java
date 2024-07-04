import java.util.Stack;

class Solution {
    public String solution(String number, int k) {
        char[] numArray = number.toCharArray();
        Stack<Character> stack = new Stack<>();

        for (int i = 0; i < numArray.length; i++) {
            while (!stack.isEmpty() && k > 0 && stack.peek() < numArray[i]) {
                stack.pop();
                k--;
            }
            stack.push(numArray[i]);
        }

        while (k > 0) {
            stack.pop();
            k--;
        }

        StringBuilder sb = new StringBuilder();
        while (!stack.isEmpty()) {
            sb.insert(0, stack.pop());
        }

        return sb.toString();
    }
}