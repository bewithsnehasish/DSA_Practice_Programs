public class LinearSearchRecusion {
    public static void main(String[] args) {
        int nums[] = {23,33,43,41,1,2,34,68,76};
        int element = 2;
        System.out.println(findElement(nums,element,0));
    }

    static int findElement(int[] nums, int target, int index) {
        if(index == nums.length) return -1;
        if(nums[index] == target)return index+1;
        else return findElement(nums,target,index+1);
    }
}
