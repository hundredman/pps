import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int sumY = 0, sumM = 0;

        for(int i = 0; i < N; i++) {
            int fee = sc.nextInt();
            int Y_cost = (fee / 30 + 1) * 10;
            int M_cost = (fee / 60 + 1) * 15;
            sumY += Y_cost;
            sumM += M_cost;
        }

        if(sumY < sumM) {
            System.out.println("Y " + sumY);
        } else if (sumM < sumY) {
            System.out.println("M " + sumM);
        } else {
            System.out.println("Y M " + sumY);
        }

        sc.close();
    }
}