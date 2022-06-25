import java.util.Scanner;

class f_floor_dan_ceiling {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        float N = scan.nextFloat();
        scan.close();
        if (N >= 0) {
            if (N > ((int) N)) {
                System.out.printf("%d %d\n", (int) N, (int) N + 1);
            } else {
                System.out.printf("%d %d\n", (int) N, (int) N);
            }
        } else {
            if (N < ((int) N)) {
                System.out.printf("%d %d\n", (int) N - 1, (int) N);
            } else {
                System.out.printf("%d %d\n", (int) N, (int) N);
            }
        }
    }
}
