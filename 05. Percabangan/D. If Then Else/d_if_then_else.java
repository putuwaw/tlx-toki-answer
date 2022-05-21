import java.util.Scanner;

class d_if_then_else {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.close();
        if (N > 0) {
            System.out.println("positif");
        } else if (N < 0) {
            System.out.println("negatif");
        } else {
            System.out.println("nol");
        }
    }
}
