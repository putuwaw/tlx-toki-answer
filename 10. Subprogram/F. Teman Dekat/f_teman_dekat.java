import java.util.Scanner;

class f_teman_dekat {
    public static int abs(int num) {
        if (num < 0) {
            return -num;
        }
        return num;
    }

    public static int power(int base, int exp) {
        if (exp == 0) {
            return 1;
        }
        return base * power(base, exp - 1);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int min = 0, max = 0;
        int N = scan.nextInt();
        int D = scan.nextInt();
        int[][] T = new int[N][2];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < 2; j++) {
                T[i][j] = scan.nextInt();
            }
        }
        scan.close();
        for (int i = 0; i < (N - 1); i++) {
            for (int j = i + 1; j < N; j++) {
                int res = power(abs(T[i][0] - T[j][0]), D) + power(abs(T[i][1] - T[j][1]), D);
                if (i == 0 && j == 1) {
                    min = res;
                    max = res;
                } else {
                    if (res < min) {
                        min = res;
                    }
                    if (res > max) {
                        max = res;
                    }
                }
            }
        }
        System.out.println(min + " " + max);
    }
}