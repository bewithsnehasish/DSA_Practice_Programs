//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
//
//Example 1:
//
//Input: nums = [1,1,1,3,3,4,3,2,4,2]
//Output: true


import java.util.Arrays;

public class Contains_Duplicate {
    public static void main(String[] args) {
        int[] nums = {1,2,3,3};
        System.out.println(duplicate(nums));

//        for (int i = 0; i < nums.length; i++) {
//            int element = nums[i];
//            for (int j = i + 1 ; j < nums.length ; j++) {
//                if (nums[j]==element){
//                    System.out.println("true");
//                }else System.out.println("false");
//            }
//        }


    }
    // Another Method :=
    private static boolean duplicate(int[] nums) {
        Arrays.sort(nums);
        for (int i = 0; i < nums.length ; i++) {
            if (nums[i]==nums[i+1]){
                return true ;
            }
        }return false;
    }
}


