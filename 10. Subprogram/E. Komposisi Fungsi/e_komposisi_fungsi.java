import java.util.Scanner;
import java.lang.Math;

class e_komposisi_fungsi {
    public static int fx(int A, int B, int x) {
        return Math.abs(A * x + B);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int A = scan.nextInt();
        int B = scan.nextInt();
        int K = scan.nextInt();
        int x = scan.nextInt();
        scan.close();
        while (K > 0) {
            x = fx(A, B, x);
            K--;
        }
        System.out.println(x);
    }
}