import java.util.Scanner;

class e_dua_pangkat {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.close();
        while (N % 2 == 0) {
            N /= 2;
        }
        if (N == 1) {
            System.out.println("ya");
        } else {
            System.out.println("bukan");
        }
    }
}
