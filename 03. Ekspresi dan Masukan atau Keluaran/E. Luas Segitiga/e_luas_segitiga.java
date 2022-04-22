import java.util.Scanner;

class e_luas_segitiga {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int A = scan.nextInt();
        int T = scan.nextInt();
        scan.close();
        String format = String.format("%.2f", (float) A * T / 2);
        System.out.println(format);
    }
}
