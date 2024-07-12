import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        for (int t = 0; t < T; t++) {
            int k = sc.nextInt();
            int n = sc.nextInt();

            int[][] people = new int[k + 1][n + 1];

            for (int i = 1; i <= n; i++) {
                people[0][i] = i;
            }

            for (int i = 1; i <= k; i++) {
                for (int j = 1; j <= n; j++) {
                    people[i][j] = people[i][j - 1] + people[i - 1][j];
                }
            }

            System.out.println(people[k][n]);
        }

        sc.close();
    }
}