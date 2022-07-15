import java.util.Scanner;

class b_balik_daftar {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int idx = 0;
        int[] arr = new int[101];
        while (scan.hasNextInt()) {
            arr[idx] = scan.nextInt();
            idx++;
        }
        scan.close();
        while (idx > 0) {
            idx--;
            System.out.println(arr[idx]);
        }
    }
}
