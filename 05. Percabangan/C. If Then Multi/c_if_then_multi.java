import java.util.Scanner;

class c_if_then_multi {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.close();
        if (N > 0 && N % 2 == 0) {
            System.out.println(N);
        }
    }
}
