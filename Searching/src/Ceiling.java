import java.util.Arrays;

public class Ceiling {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 6, 8, 10};
        int target = 5;
        int ceiling = findCeiling(arr, target);
        System.out.println("Ceiling of " + target + " is: " + ceiling);
    }
    public static int findCeiling(int[] arr, int target) {
        // Sort the array in ascending order
        Arrays.sort(arr);

        // Initialize variables for the left and right pointers
        int left = 0;
        int right = arr.length - 1;

        // Initialize the result variable
        int result = -1;

        // Perform binary search to find the ceiling
        while (left <= right) {
            int mid = left + (right - left) / 2;

            // If the middle element is equal to the target, return it as the ceiling
            if (arr[mid] == target) {
                return arr[mid];
            }
            // If the middle element is less than the target, update the left pointer
            else if (arr[mid] < target) {
                left = mid + 1;
            }
            // If the middle element is greater than the target, update the result and right pointer
            else {
                result = arr[mid];
                right = mid - 1;
            }
        }
        return result;
    }
}
