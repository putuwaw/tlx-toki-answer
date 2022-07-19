import java.util.Scanner;

class c_modus_terbesar {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] arr = new int[1001];
        for (int i = 0; i < N; i++) {
            int num = scan.nextInt();
            arr[num] += 1;
        }
        scan.close();
        int ans = 0;
        for (int i = 0; i < 1001; i++) {
            if (arr[i] >= arr[ans]) {
                ans = i;
            }
        }
        System.out.println(ans);
    }
}