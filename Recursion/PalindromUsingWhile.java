public class PalindromUsingWhile {
    public static void main(String[] args) {

        int x = 121;
        int num = x;
        int check = 0;
        if (num < 0 || (num % 10 == 0 && num != 0)) {
            System.out.println(check == num);
        }
        else {
            while(num!=0){
                int rem = num % 10;
                check = check * 10 + rem;
                num /=10;
            }
            System.out.println(check == x);
        }
    }
}