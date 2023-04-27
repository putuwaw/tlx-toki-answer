import java.util.Scanner;

public class c_caesar_cipher {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        String S = scan.next();
        int K = scan.nextInt();
        scan.close();
        for (int i = 0; i < S.length(); i++) {
            char s = S.charAt(i);
            System.out.print((char) ((s - 'a' + K) % 26 + 'a'));
        }

    }
}
