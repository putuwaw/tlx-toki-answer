import java.util.Scanner;

public class e_bahasa_dengklek {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        String S = scan.next();
        scan.close();
        for (int i = 0; i < S.length(); i++) {
            System.out.print((char) ((int) S.charAt(i) ^ 32));
        }
    }
}
