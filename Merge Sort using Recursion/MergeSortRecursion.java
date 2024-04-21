import java.util.Arrays;

public class MergeSortRecursion {
    public static void main(String[] args) {

    }

    static int[] mergesort(int arr[]){
        if(arr.length == 1)return arr ;
        int mid = arr.length/2;
        int[] left = mergesort(Arrays.copyOfRange(arr,0,mid));
        int[] right = mergesort(Arrays.copyOfRange(arr,mid,arr.length));

        return merge(left,right);
    }

    private static int[] merge(int[] first, int[] second) {
        int[] mix = new int[first.length + second.length];


        int i = 0;
        int j = 0;
        int k = 0;
        while (i < first.length && j < second.length){
            if(first[i]<second[j])mix[k] = first[i];i++;
        }
    }
}
