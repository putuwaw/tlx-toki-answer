import java.util.Scanner;

class c_bilangan_agak_prima {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        for (int i = 0; i < N; i++) {
            int num = scan.nextInt();
            int factor = 0;
            for (int j = 1; j <= num; j++) {
                if (num % j == 0) {
                    factor++;
                }
                if (factor > 4) {
                    break;
                }
            }
            if (factor <= 4) {
                System.out.println("YA");
            } else {
                System.out.println("BUKAN");
            }
        }
        scan.close();
    }
}
