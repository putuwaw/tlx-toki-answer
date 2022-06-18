import java.util.Scanner;

class e_if_then_case {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.close();
        if (N > 9999){
            System.out.println("puluhribuan");
        } else if (N > 999){
            System.out.println("ribuan");
        } else if (N > 99){
            System.out.println("ratusan");
        } else if (N > 9){
            System.out.println("puluhan");
        } else{
            System.out.println("satuan");
        }
    }
}
