import java.util.Scanner;

class d_faktorisasi_prima {
    public static boolean isFactor(int N, int x) {
        if (N % x == 0) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.close();
        int i, pos, power;
        i = 2;
        pos = 0;
        while (N > 1) {
            power = 0;
            if (isFactor(N, i)) {
                pos++;
                while (N % i == 0) {
                    N /= i;
                    power++;
                }
                if (pos > 1) {
                    System.out.print(" x ");
                }
                System.out.print(i);
                if (power > 1) {
                    System.out.print("^" + power);
                }
            }
            i++;
        }
    }
}