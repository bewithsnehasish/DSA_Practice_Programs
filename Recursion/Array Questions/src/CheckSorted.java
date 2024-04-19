public class CheckSorted {
    public static void main(String[] args) {
        int arr[]= {12,13,32,34,55,64};
        int nums[] = {2,3,4,22,34,12,45};
        System.out.println(checkSorted(arr,0));
        System.out.println(checkSorted(nums,0));
    }

    static boolean checkSorted(int[] arr,int index) {
        if(index == arr.length)return true;
        return arr[index] < arr[index+1] && checkSorted(arr,index+1);
    }
}
