import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int current = sc.nextInt();
        double goodGood = sc.nextDouble();
        double goodBad = sc.nextDouble();
        double badGood = sc.nextDouble();
        double badBad = sc.nextDouble();

        double[][] dp = new double[N + 1][2];

        dp[0][0] = (current == 0) ? 1.0 : 0.0;
        dp[0][1] = (current == 1) ? 1.0 : 0.0;

        for (int i = 1; i <= N; i++) {
            dp[i][0] = dp[i-1][0] * goodGood + dp[i-1][1] * badGood;
            dp[i][1] = dp[i-1][0] * goodBad + dp[i-1][1] * badBad;
        }

        double goodProbability = dp[N][0] * 1000;
        double badProbability = dp[N][1] * 1000;

        System.out.println(Math.round(goodProbability));
        System.out.println(Math.round(badProbability));

        sc.close();
    }
}