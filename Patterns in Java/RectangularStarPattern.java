import java.util.Scanner;

public class RectangularStarPattern {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int pattern = input.nextInt();
        starpattern(pattern);
    }

    static void starpattern(int pattern) {
        for (int row = 1; row <= pattern; row++) {
            for (int col = 1; col <= pattern; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
