public class Minimum_number{
    public static void main(String[] args) {
        int[] arr = {10,34,55,56,34,23,453,54,34,23,11,44,4};
        System.out.println(minimum(arr));
    }

    private static int minimum(int[] arr) {
        int min ;
        if (arr.length == 0){
            return -1 ;
        }
        min = arr[0];
        for(int i = 1 ; i <= arr.length-1 ; i++){
            if (min>arr[i]){
                min = arr[i];
            }
            else continue;
        }
        return min;
    }
}
