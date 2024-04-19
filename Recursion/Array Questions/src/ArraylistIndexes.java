import java.util.ArrayList;

public class ArraylistIndexes {
    public static void main(String[] args) {
        int arr[] = {21,32,45,23,32,44,44,52,44,56,2,22,44};
        int target = 44;
        System.out.println(findallindex(arr,target,0,new ArrayList<>()));
    }

    static ArrayList<Integer> findallindex(int[] arr, int target, int index, ArrayList<Integer> list) {
        if(index == arr.length)return list;
        if(arr[index] == target)list.add(index);
        return findallindex(arr, target, index+1, list);
    };
}
