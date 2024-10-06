class Solution {
    public boolean canArrange(int[] arr, int k) {
    //     int n = arr.length;
    //     List<Integer> used = new ArrayList<>();

    //     for(int i = 0; i< n ; i++){
    //         if(used.contains(arr[i]))continue;
    //         boolean fp = false;
    //         for(int j=i+1; j<n; j++){
    //             if(used.contains(arr[j]))continue;
    //             if ((arr[i]+ arr[j]) % k == 0){
    //                 used.add(arr[i]);
    //                 used.add(arr[j]);
    //                 fp = true;
    //                 break;
    //             }
    //         }

    //         if(!fp)return fp;
    //     }
    //     return true;
    // }
    int[] remainder = new int[k];
        
        for (int num : arr) {
            int rem = ((num % k) + k) % k;  
            remainder[rem]++;
        }
        
        if (remainder[0] % 2 != 0) return false;
        
        for (int i = 1; i <= k / 2; i++) {
            if (remainder[i] != remainder[k - i]) return false;
        }
        
        return true;
    }
}
