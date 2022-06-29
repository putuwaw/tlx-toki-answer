import java.util.Scanner;

class d_while_pencacah {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int res = 0;
        while (scan.hasNextInt()) {
            int num = scan.nextInt();
            res += num;
        }
        scan.close();
        System.out.println(res);
    }
}
