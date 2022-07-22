import java.util.Scanner;

class e_perkalian_matriks {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int M = scan.nextInt();
        int P = scan.nextInt();
        int[][] A = new int[N][M];
        int[][] B = new int[M][P];
        int[][] C = new int[N][P];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                A[i][j] = scan.nextInt();
            }
        }
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < P; j++) {
                B[i][j] = scan.nextInt();
            }
        }
        scan.close();
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < P; j++) {
                C[i][j] = 0;
                for (int k = 0; k < M; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
                System.out.print(C[i][j] + " ");
            }
            System.out.println();
        }
    }
}