import java.util.Arrays;

public class ColorsSort75 {
    public static void main(String[] args) {
        // Test Case 1: Example case
        int[] nums1 = {2, 0, 2, 1, 1, 0};
        test(nums1); // Expected output: [0, 0, 1, 1, 2, 2]

        // Test Case 2: All zeros
        int[] nums2 = {0, 0, 0, 0, 0};
        test(nums2); // Expected output: [0, 0, 0, 0, 0]

        // Test Case 3: All ones
        int[] nums3 = {1, 1, 1, 1, 1};
        test(nums3); // Expected output: [1, 1, 1, 1, 1]

        // Test Case 4: All twos
        int[] nums4 = {2, 2, 2, 2, 2};
        test(nums4); // Expected output: [2, 2, 2, 2, 2]

        // Test Case 5: Mixed elements
        int[] nums5 = {2, 1, 0, 2, 1, 0};
        test(nums5); // Expected output: [0, 0, 1, 1, 2, 2]
    }

    public static void test(int[] arr) {
        boolean swapped;
        for(int i = 0; i < arr.length; i++){
            swapped = false ;
            for (int j = 1; j < arr.length - i; j++){
                if(arr[j]<arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    swapped = true;
                }
            }if (!swapped) break;
        }
        System.out.println(Arrays.toString(arr));
    }
}

