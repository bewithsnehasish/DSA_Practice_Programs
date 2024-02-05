public class FindMIN_MAX {
    public static void main(String[] args) {
        int[] arr = {1, 4, 3, -5, -4, 8, 6};
        int min = findMinimum(arr, arr.length);
        System.out.println(min);
        int max = findMaximum(arr, arr.length);
        System.out.println(max);
}

    static int findMaximum(int[] arr,int n) {
        if (n==1) return  arr[0];
        return Math.max(arr[n-1],findMaximum(arr,n-1));
    }

    static int findMinimum(int[] arr,int n) {
        if (n == 1) return arr[0];
        return Math.min(arr[n-1],findMinimum(arr,n-1));
    }


}
