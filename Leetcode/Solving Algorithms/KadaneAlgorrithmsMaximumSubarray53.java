public class KadaneAlgorrithmsMaximumSubarray53 {
    public static void main(String[] args) {
        int[] arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
        long maxSum = maxSubArray(arr);
        System.out.println("The maximum subarray sum is: " + maxSum);
    }
    static int maxSubArray(int[] nums) {
        int sum =  0;
        int max = nums[0];
        for(int num: nums){
            sum+=num;
            if(sum > max) max = sum;
            if(sum<0)sum = 0;
        }
        return max ;
    }
}
