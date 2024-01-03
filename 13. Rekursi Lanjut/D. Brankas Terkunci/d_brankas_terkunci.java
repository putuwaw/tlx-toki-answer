import java.util.Scanner;

public class Solution {
    public static int[] save = new int[17];
    public static boolean[] isVisited = new boolean[17];
    public static int N, K;

    public static void draw(int depth) {
        if (depth >= K - 1) {
            for (int i = 0; i < K; i++) {
                System.out.printf("%d ", save[i] + 1);
            }
            System.out.println();

        } else {
            for (int i = save[depth] + 1; i < N; i++) {
                if (!isVisited[i]) {
                    isVisited[i] = true;
                    save[depth + 1] = i;
                    draw(depth + 1);
                    isVisited[i] = false;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        N = scan.nextInt();
        K = scan.nextInt();
        scan.close();

        for (int i = 0; i < N; i++) {
            save[0] = i;
            draw(0);
        }

    }
}
