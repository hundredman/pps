import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] digitCounts = new int[10];
        int product = 1;

        for (int i = 0; i < 3; i++) {
            int num = sc.nextInt();
            product *= num;
        }

        String productStr = String.valueOf(product);
        for (char ch : productStr.toCharArray()) {
            digitCounts[ch - '0']++;
        }

        for (int count : digitCounts) {
            System.out.println(count);
        }

        sc.close();
    }
}