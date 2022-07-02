import java.util.Scanner;

class g_statistika_sederhana {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int A = 0, B = 0;
        for (int i = 0; i < N; i++) {
            int num = scan.nextInt();
            if (i == 0) {
                A = num;
                B = num;
            } else {
                if (num > A) {
                    A = num;
                }
                if (num < B) {
                    B = num;
                }
            }
        }
        scan.close();
        System.out.println(A + " " + B);
    }
}
