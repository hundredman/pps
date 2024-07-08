import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String str = sc.nextLine();
            int[] count = new int[10];

            for (char ch : str.toCharArray()) {
                int num = ch - '0';
                count[num]++;
            }

            int count69 = count[6] + count[9];
            int halfCount69 = (int) Math.ceil(count69 / 2.0);
            count[6] = count[9] = halfCount69;

            int max = 0;
            for (int numCount : count) {
                if (numCount > max) {
                    max = numCount;
                }
            }

            System.out.println(max);
        }
    }
}