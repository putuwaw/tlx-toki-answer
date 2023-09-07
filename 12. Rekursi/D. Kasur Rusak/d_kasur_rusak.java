import java.util.Scanner;

public class d_kasur_rusak {
    public static boolean palindrome(String S) {
        int len = S.length();
        if (len == 1) {
            return true;
        } else if (len == 2) {
            return S.charAt(0) == S.charAt(1);
        } else {
            return S.charAt(0) == S.charAt(len - 1) && palindrome(S.substring(1, len - 1));
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String S = scan.nextLine();
        scan.close();
        if (palindrome(S)) {
            System.out.println("YA");
        } else {
            System.out.println("BUKAN");
        }
    }
}
