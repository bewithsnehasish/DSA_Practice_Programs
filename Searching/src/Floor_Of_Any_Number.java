public class Floor_Of_Any_Number {
    public static void main(String[] args) {
        int[] arr = {2,3,4,9,14,16,18,25,52,58,65,78};
        int target = 10;
        int ans = floor(arr,target);
        System.out.println(ans);
    }
    static int floor(int[] arr,int target){
        int start = 0 ;
        int end = arr.length-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(target<=arr[mid]){
                end = mid - 1;
            } else if (target>arr[mid]) {
                start = mid + 1 ;
            }else return mid ;
        }
        return end;
    }

}
