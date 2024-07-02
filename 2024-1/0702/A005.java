class Solution {
    public int solution(String skill, String[] skill_trees) {
        int answer = 0;

        for (String skill_tree : skill_trees) {
            boolean possible = true;
            int index = 0;

            for (char c : skill_tree.toCharArray()) {
                if (skill.indexOf(c) != -1) {
                    if (c != skill.charAt(index)) {
                        possible = false;
                        break;
                    } else {
                        index++;
                    }
                }
            }

            if (possible) answer++;
        }

        return answer;
    }
}