import java.util.Scanner;

public class b_faktorial_ganjil_genap {
    public static Integer factorial_gg(Integer N) {
        if (N == 0) {
            return 1;
        } else if (N % 2 == 0) {
            return N / 2 * factorial_gg(N - 1);
        } else {
            return N * factorial_gg(N - 1);
        }
    }

    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        Integer N = scan.nextInt();
        scan.close();
        System.out.println(factorial_gg(N));
    }
}
