import java.util.Scanner;

public class Solution {
    public static void draw(int N) {
        if (N == 1) {
            System.out.println("*");
        } else {
            draw(N - 1);
            for (int i = 0; i < N; i++) {
                System.out.print("*");
            }
            System.out.println();
            draw(N - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.close();
        draw(N);
    }
}
