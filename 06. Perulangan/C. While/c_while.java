import java.util.Scanner;

class c_while {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        while (scan.hasNextLine()) {
            String str = scan.nextLine();
            System.out.println(str);
        }
        scan.close();
    }
}
