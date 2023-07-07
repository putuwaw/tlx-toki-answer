import java.util.Scanner;

public class f_gaya_penulisan_variabel {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        String S = scan.next();
        scan.close();
        boolean isCaps = false;
        for (int i = 0; i < S.length(); i++) {
            if (isCaps) {
                System.out.print((char) ((int) S.charAt(i) ^ 32));
                isCaps = false;
            } else if (S.charAt(i) >= 'A' && S.charAt(i) <= 'Z') {
                System.out.printf("_%c", (char) ((int) S.charAt(i) ^ 32));
            } else if (S.charAt(i) == '_') {
                isCaps = true;
            } else {
                System.out.print(S.charAt(i));
            }
        }

    }
}
