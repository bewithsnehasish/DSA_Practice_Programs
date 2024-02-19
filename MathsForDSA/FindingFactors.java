public class FindingFactors {
    public static void main(String[] args) {
        int num = 22;
        factor2(num);
    }

    static void factor1(int num) {
        for (int i = 0; i < num; i++) {
            if (num % i == 0) System.out.print(i + " ");
        }
    }

    static void factor2(int num){
        for (int i = 1; i < Math.sqrt(num); i++) {
            if(num % i == 0){
                if (num/i == 0) System.out.print(i+" ");
            }
            System.out.print(i + " " + num/i + " ");
        }
    }
}
