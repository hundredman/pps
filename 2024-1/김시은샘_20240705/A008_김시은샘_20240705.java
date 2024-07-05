import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int numCases = sc.nextInt();

        for (int i = 0; i < numCases; i++) {
            int numStudents = sc.nextInt();
            int[] scores = new int[numStudents];
            int sum = 0;

            for (int j = 0; j < numStudents; j++) {
                scores[j] = sc.nextInt();
                sum += scores[j];
            }

            double avg = (double)sum / numStudents;
            int countAboveAvg = 0;

            for (int score : scores) {
                if (score > avg) {
                    countAboveAvg++;
                }
            }

            double percentage = ((double)countAboveAvg / numStudents) * 100;

            System.out.printf("%.3f%%\n", percentage);
        }

        sc.close();
    }
}