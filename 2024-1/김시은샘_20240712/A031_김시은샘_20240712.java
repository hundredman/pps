import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();

        int minCuts = N * M - 1;

        System.out.println(minCuts);

        sc.close();
    }
}