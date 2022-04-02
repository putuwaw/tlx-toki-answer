import java.util.Scanner;

class b_a_tambah_b {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        scan.close();
        System.out.println(a+b);
    }
}
