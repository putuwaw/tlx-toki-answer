import java.util.Scanner;

class b_cek_bilangan_prima {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        for (int i = 0; i < N; i++) {
            int num = scan.nextInt();
            boolean isPrime = true;
            if (num == 1) {
                isPrime = false;
            } else {
                for (int j = 2; j * j <= num; j++) {
                    if (num % j == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
            if (isPrime) {
                System.out.println("YA");
            } else {
                System.out.println("BUKAN");
            }
        }
        scan.close();
    }
}
