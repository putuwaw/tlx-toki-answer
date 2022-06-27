import java.util.Scanner;

class b_for {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    int N = scan.nextInt();
    int res = 0;
    for (int i = 0; i < N; i++) {
      int B = scan.nextInt();
      res += B;
    }
    scan.close();
    System.out.println(res);
  }
}
