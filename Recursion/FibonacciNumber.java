import java.util.Scanner;

//
public class FibonacciNumber {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Please enter the Number for which you want to get the Fibonacci ; ");
        int n = input.nextInt();
        System.out.println(fibo(n));
    }

    static int fibo(int n) {
        if (n<2) return n;
        int i = fibo(n - 1) + fibo(n - 2);
        return i;
    }
}
