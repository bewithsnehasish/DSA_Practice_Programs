import java.util.Scanner;

public class StarPattern {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int pattern = input.nextInt();
        starpattern(pattern);
    }

    static void starpattern(int pattern) {
        for (int row = 0; row < pattern; row++) {
            for (int col = 0; col <= row; col++) {
                System.out.println("* ");
            }
            System.out.println();
        }
    }
}
