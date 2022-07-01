import java.util.Scanner;

class f_faktor_bilangan {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.close();
        for (int i = N; i > 0; i--) {
            if (N % i == 0) {
                System.out.println(i);
            }
        }
    }
}
