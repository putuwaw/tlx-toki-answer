import java.util.Scanner;

class c_membalik_yang_terbalik {
    public static int reverse(int x) {
        int res = 0;
        while (x > 0) {
            res = res * 10 + x % 10;
            x /= 10;
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int A = scan.nextInt();
        int B = scan.nextInt();
        System.out.println(reverse(reverse(A) + reverse(B)));
        scan.close();
    }
}