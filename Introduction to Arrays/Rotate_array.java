// Rotate ArrayGiven an integer array nums, rotate the array to the right by k steps, where k is non-negative.
//
//
//
//Example 1:
//
//Input: nums = [1,2,3,4,5,6,7], k = 3
//Output: [5,6,7,1,2,3,4]
//Explanation:
//rotate 1 steps to the right: [7,1,2,3,4,5,6]
//rotate 2 steps to the right: [6,7,1,2,3,4,5]
//rotate 3 steps to the right: [5,6,7,1,2,3,4]

import java.util.* ;


public class Rotate_array {
    public static void main(String[] args) {
        int [] nums = {1,2,3,4,5,6,7} ;
        int k = 3 ;
        int n = nums.length ;
        replacearray(nums, k , n );
        System.out.println(Arrays.toString(nums));
    }

    static void replacearray(int[] nums, int k, int n) {
        if (n == 0)
            return;
        k = k % n;
        if (k > n)
            return;
        int[] temp = new int[k];
        for (int i = n - k; i < n; i++) {
            temp[i - n + k] = nums[i];
        }
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
}
