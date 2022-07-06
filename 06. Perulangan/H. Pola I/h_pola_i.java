import java.util.Scanner;

class h_pola_i {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int K = scan.nextInt();
        scan.close();
        for (int i = 1; i <= N; i++){
            if (i % K == 0) {
                System.out.print("*");
            } else {
                System.out.print(i);
            }
            if (i != N) {
                System.out.print(" ");
            } else {
                System.out.println("");
            }
        }
    }
}
