import java.util.Scanner;
 
public class SpecialCharacters {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        while (a-- > 0) {
            int n = scanner.nextInt();
            if (n % 2 != 0) {
                System.out.println("NO");
                continue;
            }
            System.out.println("YES");
            for (int b= 0; 2 * b < n; b++) {
                System.out.print((b % 2 == 0) ? "AA" : "BB");
            }
            System.out.println();
        }
    }
}