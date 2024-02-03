import java.util.Scanner;

public class FloydsTriangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int pattern = input.nextInt();
        floyd(pattern);
        System.out.println();
        reversefloyd(pattern);
    }

    static void floyd(int pattern) {
        for (int row = 1; row <= pattern; row++) {
            for (int col = 1; col <= row; col++) {
                System.out.print(col);
            }
            System.out.println();
        }
    }
    static void reversefloyd(int pattern) {
        for (int row = 1; row <= pattern; row++) {
            for (int col = 1; col <= pattern-row+1; col++) {
                System.out.print(col);
            }
            System.out.println();
        }
    }
}
