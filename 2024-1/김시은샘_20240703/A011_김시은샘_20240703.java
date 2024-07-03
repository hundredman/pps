import java.util.*;

class Solution {
    public int[] solution(int N, int[] stages) {
        Map<Integer, Double> failureRates = new HashMap<>();
        int[] playersInStage = new int[N + 2];

        for (int stage : stages) {
            playersInStage[stage]++;
        }

        int totalPlayers = stages.length;
        for (int i = 1; i <= N; i++) {
            if (totalPlayers == 0) {
                failureRates.put(i, 0.0);
            } else {
                double failureRate = (double) playersInStage[i] / totalPlayers;
                failureRates.put(i, failureRate);
                totalPlayers -= playersInStage[i];
            }
        }

        int[] answer = failureRates.entrySet().stream()
                .sorted(Map.Entry.<Integer, Double>comparingByValue().reversed()
                        .thenComparingInt(Map.Entry::getKey))
                .mapToInt(Map.Entry::getKey)
                .toArray();

        return answer;
    }
}