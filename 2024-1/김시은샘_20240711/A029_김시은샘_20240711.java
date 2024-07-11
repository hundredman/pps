import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long N = sc.nextLong();
        int first = sc.nextInt();

        if (N >= 6) {
            System.out.println("Love is open door");
        } else {
            int current = first;
            for (int i = 2; i <= N; i++) {
                current = 1 - current;
                System.out.println(current);
            }
        }

        sc.close();
    }
}