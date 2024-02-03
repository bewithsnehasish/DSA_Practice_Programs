import java.util.Scanner;

public class ReverseStar {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Please the number of Rows of pattern you want: ");
        int a = input.nextInt();
        ReverseStar(a);
    }
    static void ReverseStar(int n) {
        for (int row = 1; row <= n; row++) {
            // for every row, run the col
            for (int col = 1; col <= n-row+1; col++) {
                System.out.print("* ");
            }
            // when one row is printed, we need to add a newline
            System.out.println();
        }
    }
}
