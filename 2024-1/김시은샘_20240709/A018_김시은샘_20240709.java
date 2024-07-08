import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
import java.util.Collections;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] A = new int[N];
        int[] B = new int[N];

        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }
        for (int i = 0; i < N; i++) {
            B[i] = sc.nextInt();
        }

        Arrays.sort(A);

        ArrayList<Integer> listB = new ArrayList<>();
        for (int num : B) {
            listB.add(num);
        }

        int sum = 0;

        for (int i = 0; i < N; i++) {
            int maxB = Collections.max(listB);
            int maxIndex = listB.indexOf(maxB);

            sum += A[i] * maxB;

            listB.remove(maxIndex);
        }

        System.out.println(sum);

        sc.close();
    }
}