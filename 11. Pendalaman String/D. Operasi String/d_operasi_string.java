import java.util.Scanner;

public class d_operasi_string {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        String S1 = scan.next();
        String S2 = scan.next();
        String S3 = scan.next();
        String S4 = scan.next();
        scan.close();
        S1 = S1.replace(S2, "");
        int pos = S1.indexOf(S3) + S3.length();
        S1 = S1.substring(0, pos) + S4 + S1.substring(pos);
        System.out.println(S1);
    }
}
