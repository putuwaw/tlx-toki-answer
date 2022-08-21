import java.util.Scanner;

class b_pembuangan_string {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String line = scan.nextLine();
        scan.close();
        String[] S = line.split(" ");
        while (S[0].contains(S[1])) {
            S[0] = S[0].replaceAll(S[1], "");
        }
        System.out.println(S[0]);
    }
}