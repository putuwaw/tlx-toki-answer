import java.util.Scanner;

public class c_komposisi_fungsi_ii {
    public static int fx(int A, int B, int K, int x) {
        if (K == 1) {
            return Math.abs(A * x + B);
        }
        return Math.abs(A * fx(A, B, K - 1, x) + B);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int A = scan.nextInt();
        int B = scan.nextInt();
        int K = scan.nextInt();
        int x = scan.nextInt();
        scan.close();
        System.out.println(fx(A, B, K, x));
    }
}
