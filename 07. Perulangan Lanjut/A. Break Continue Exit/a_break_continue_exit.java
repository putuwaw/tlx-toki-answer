import java.util.Scanner;

class a_break_continue_exit {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.close();
        for (int i = 1; i <= N; i++){
            if (i % 10 == 0){
                continue;
            }
            else if (i == 42){
                System.out.println("ERROR");
                break;
            }
            else{
                System.out.println(i);
            }
        }
    }
}
