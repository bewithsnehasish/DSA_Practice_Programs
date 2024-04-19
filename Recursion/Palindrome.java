import java.util.Scanner;

public class Palindrome {
    static int reversed = 0;
    static void fun(int num){
        if(num == 0) return;
        int rem =  num % 10;
        reversed = reversed * 10 + rem;
        fun(num / 10);
    }
    static boolean checkPalindrome(int num){
        fun(num);
        return reversed == num;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Please enter the number you want to reverse : ");
        int num = input.nextInt();
        System.out.println(checkPalindrome(num));
    }
}
