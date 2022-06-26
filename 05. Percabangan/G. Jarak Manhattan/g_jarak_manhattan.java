import java.util.Scanner;

class g_jarak_manhattan {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    int x1 = scan.nextInt();
    int y1 = scan.nextInt();
    int x2 = scan.nextInt();
    int y2 = scan.nextInt();
    scan.close();
    x1 = x1 - x2;
    y1 = y1 - y2;
    if (x1 < 0) {
      x1 = x1 * -1;
    }
    if (y1 < 0) {
      y1 = y1 * -1;
    }
    System.out.println(x1 + y1);
  }
}
