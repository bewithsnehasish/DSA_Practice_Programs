import java.util.Scanner;

public class ReverseNumber {
    static int reversed = 0;
    static void fun(int num){
        if(num == 0) return;
        int rem =  num % 10;
        reversed = reversed * 10 + rem;
        fun(num / 10);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Please enter the number you want to reverse : ");
        int num = input.nextInt();
        fun(num);
        System.out.println(reversed);
    }
}

