import java.util.Scanner;

class array {
    public int[][] arr;
    public array() {
        arr = new int[2][1001];
    }
}

class b_tukang_sulap {
    public static void swap(array swapArr, int P, int x, int Q, int y) {
        int temp = swapArr.arr[P][x];
        swapArr.arr[P][x] = swapArr.arr[Q][y];
        swapArr.arr[Q][y] = temp;
    }
    public static void main(String[] args) {
        array swapArr = new array();
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < N; j++) {
                int num = scan.nextInt();
                swapArr.arr[i][j] = num;
            }
        }
        int T = scan.nextInt();
        for (int i = 0; i < T; i++) {
            int x, y, p1, q1;
            char P, Q;
            P = scan.next().charAt(0);
            x = scan.nextInt();
            Q = scan.next().charAt(0);
            y = scan.nextInt();
            p1 = P - 'A';
            q1 = Q - 'A';
            swap(swapArr, p1, x - 1, q1, y - 1);
        }
        scan.close();
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < N; j++) {
                System.out.print(swapArr.arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
