//Ergonomic Mouse
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
//
//Example 1:
//Input: nums = [3,0,1]
//Output: 2
//Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

import java.util.ArrayList;
import java.util.Arrays;

public class Missing_numbers {
    public static void main(String[] args) {
        int [] nums = {6,4,2,3,5,7,0,1,10} ;
        Arrays.sort(nums);
        int n = nums.length;
        ArrayList<Integer> temp = new ArrayList<>();
        for (int i = 0; i <= n-1; i++) {
            if (nums[i]== i ){
                i++ ;
            }else temp.add(i) ;
        }
        System.out.println(temp);
    }
}
