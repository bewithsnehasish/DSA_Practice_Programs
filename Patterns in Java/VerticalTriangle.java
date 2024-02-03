import java.util.Scanner;

public class VerticalTriangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int pattern = input.nextInt();
        verticalTriangle(pattern);         
    }

    static void verticalTriangle(int pattern) {
        for (int rows = 0; rows < 2 * pattern; rows++) {
            int totalColsRow = rows > pattern ? 2 * pattern - rows : rows ;
            for (int col = 0; col < totalColsRow; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
