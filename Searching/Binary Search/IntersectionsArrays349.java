//
//349. Intersection of Two Arrays
//        Solved
//        Easy
//        Topics
//        Companies
//        Given two integer arrays nums1 and nums2, return an array of their
//        intersection
//        . Each element in the result must be unique and you may return the result in any order.
//
//
//
//        Example 1:
//
//        Input: nums1 = [1,2,2,1], nums2 = [2,2]
//        Output: [2]
//        Example 2:
//
//        Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
//        Output: [9,4]
//        Explanation: [4,9] is also accepted.
//
//
//        Constraints:
//
//        1 <= nums1.length, nums2.length <= 1000
//        0 <= nums1[i], nums2[i] <= 1000


import java.util.ArrayList;
import java.util.List;
public class IntersectionsArrays349 {
}

class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        List<Integer> ansList = new ArrayList<>();

        for (int i = 0; i < nums1.length; i++) {
            for (int j = 0; j < nums2.length; j++) {
                if (nums1[i] == nums2[j] && !ansList.contains(nums1[i])) {
                    ansList.add(nums1[i]);
                    break; // Break from inner loop since we found an intersection
                }
            }
        }

        // Convert ArrayList to array
        int[] ans = new int[ansList.size()];
        for (int i = 0; i < ansList.size(); i++) {
            ans[i] = ansList.get(i);
        }

        return ans;
    }
}g