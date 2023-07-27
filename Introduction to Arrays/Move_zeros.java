//Move Zeros
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//Note that you must do this in-place without making a copy of the array.
//
//
//
//Example 1:
//
//Input: nums = [0,1,0,3,12]
//Output: [1,3,12,0,0]

import java.util.ArrayList;
import java.util.Arrays;

public class Move_zeros {
    public static void main(String[] args) {
        int [] nums = {0,1,0,3,12};
        int n = nums.length;
        System.out.println(nums.length);
        ArrayList<Integer> temp = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0)
                temp.add(nums[i]);
        }

        // number of non-zero elements.
        int nz = temp.size();

        //copy elements from temp
        //fill first nz fields of
        //original array:
        for (int i = 0; i < nz; i++) {
            nums[i] = temp.get(i);
        }

        //fill rest of the cells with 0:
        for (int i = nz; i < n; i++) {
            nums[i] = 0;
        }
        System.out.println(Arrays.toString(nums));
    }
}
