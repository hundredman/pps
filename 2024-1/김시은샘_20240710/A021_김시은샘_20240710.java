import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int sum = 0;

        for (int i = 0; i < num; i++) {
            int size = sc.nextInt();
            sum += size;
            if (i > 0) {
                sum--;
            }
        }

        System.out.println(sum);
        sc.close();
    }
}