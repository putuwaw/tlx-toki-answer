import java.util.Scanner;

class b_pola_ii {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.close();
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if (j < N - i - 1){
                    System.out.print(" ");
                } else {
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }
}
