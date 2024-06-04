import java.util.ArrayList;

public class RearrageThearray2149 {
    public static void main(String[] args) {
        // Array Initialisation.
        int n = 4;
        int A[]= {1,2,-4,-5};


        int[]ans= RearrangebySign(A,n);

        for (int i = 0; i < n; i++) {
            System.out.print(ans[i]+" ");
        }

    }

    static int[] RearrangebySign(int[] nums, int no) {
        if(nums.length <= 0) System.out.println("Wrong Sequence given");;

        ArrayList<Integer> p = new ArrayList<>();
        ArrayList<Integer> n = new ArrayList<>();



        for(int num : nums){
            if (num >= 0) p.add(num);
            else n.add(num);
        }


        int posIndex = 0;
        int negIndex = 0;

        for (int i = 0; i < no; i++) {
            if (i % 2 == 0) {
                nums[i] = p.get(posIndex++);
            } else {
                nums[i] = n.get(negIndex++);
            }
        }

        return nums;
    }
}
