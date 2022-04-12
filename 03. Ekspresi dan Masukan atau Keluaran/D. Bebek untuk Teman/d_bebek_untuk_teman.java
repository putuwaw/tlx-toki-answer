import java.util.Scanner;

class d_bebek_untuk_teman {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int A = scan.nextInt();
        int B = scan.nextInt();
        scan.close();
        System.out.print("masing-masing ");
        System.out.println(A / B);
        System.out.print("bersisa ");
        System.out.println(A % B);
    }
}
