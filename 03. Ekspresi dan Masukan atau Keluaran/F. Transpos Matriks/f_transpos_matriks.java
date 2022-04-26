import java.util.Scanner;

class f_transpos_matriks {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a, b, c, d, e, f, g, h, i;
        a = scan.nextInt();
        b = scan.nextInt();
        c = scan.nextInt();
        d = scan.nextInt();
        e = scan.nextInt();
        f = scan.nextInt();
        g = scan.nextInt();
        h = scan.nextInt();
        i = scan.nextInt();
        scan.close();
        System.out.printf("%d %d %d\n%d %d %d\n%d %d %d\n", a, d, g, b, e, h, c, f, i);
    }
}
