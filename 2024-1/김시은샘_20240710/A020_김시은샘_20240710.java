import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int max = 0, current = 0;

        for (int i = 0; i < 4; i++) {
            int out = sc.nextInt();
            int in = sc.nextInt();
            current -= out;
            current += in;
            if(max < current) max = current;
        }

        System.out.println(max);

        sc.close();
    }
}