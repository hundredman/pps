import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();
        sc.nextLine();

        for (int t = 0; t < T; t++) {
            String line = sc.nextLine();

            String[] tokens = line.split(" ");

            double num = Double.parseDouble(tokens[0]);

            for (int i = 1; i < tokens.length; i++) {
                char op = tokens[i].charAt(0);

                switch (op) {
                    case '@':
                        num *= 3;
                        break;
                    case '%':
                        num += 5;
                        break;
                    case '#':
                        num -= 7;
                        break;
                    default:
                        break;
                }
            }

            System.out.printf("%.2f\n", num);
        }

        sc.close();
    }
}