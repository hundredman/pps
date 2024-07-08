import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int sumOfSquares = 0;

        try (Scanner sc = new Scanner(System.in)) {
            for (int i = 0; i < 5; i++) {
                int number = sc.nextInt();
                sumOfSquares += number * number;
            }
        }

        int result = sumOfSquares % 10;
        System.out.println(result);
    }
}