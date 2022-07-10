import java.util.Scanner;

class c_pola_iii {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.close();
        int counter = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < i + 1; j++) {
                System.out.print(counter % 10);
                counter++;
            }
            System.out.println();
        }
    }
}
