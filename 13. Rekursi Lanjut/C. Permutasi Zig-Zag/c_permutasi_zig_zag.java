import java.util.Scanner;

public class Solution {
    public static int[] save = new int[17];
    public static boolean[] isVisited = new boolean[17];
    public static int N;

    public static void write(int depth) {
        if (depth > N) {
            boolean isZigZag = true;
            if (N >= 3) {
                for (int i = 2; i < N; i++) {
                    boolean h = (save[i] > save[i - 1]) && (save[i] > save[i + 1]);
                    boolean l = (save[i] < save[i - 1]) && (save[i] < save[i + 1]);
                    if (!(h || l)) {
                        isZigZag = false;
                        break;
                    }
                }
            }
            if (N < 3 || isZigZag) {
                for (int i = 1; i <= N; i++) {
                    System.out.print(save[i]);
                }
                System.out.println();
            }
        } else {
            for (int i = 1; i <= N; i++) {
                if (!isVisited[i]) {
                    isVisited[i] = true;
                    save[depth] = i;
                    write(depth + 1);
                    isVisited[i] = false;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        N = scan.nextInt();
        scan.close();
        write(1);
    }
}
