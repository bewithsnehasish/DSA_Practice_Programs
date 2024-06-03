public class NumberOfStepstoReduceaNumbertoZero1342 {
    public static void main(String[] args) {
        System.out.println(check(14)); // Output should be 6
        System.out.println(check(8));  // Output should be 4
    }

    static int check(int num) {
        if (num == 0) {
            return 0;
        } else if (num % 2 == 0) {
            return 1 + check(num / 2);
        } else {
            return 1 + check(num - 1);
        }
    }
}
