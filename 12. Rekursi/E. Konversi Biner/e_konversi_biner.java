import java.util.Scanner;

public class Solution {
    public static void biner(int N) {
        if (N == 1) {
            System.out.print(1);
        } else {
            biner(N / 2);
            System.out.print(N % 2);
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.close();
        biner(N);
    }
}
