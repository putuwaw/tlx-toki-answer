import java.util.Scanner;

class b_if_then {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.close();
        if (N > 0) {
            System.out.println(N);
        }
    }
}
