import java.util.HashMap;

public class Solution {
    public static int LongestWithSubArray(int[] arr,int k)
    {
        int maxLength =0;
        HashMap<Integer,Integer> prefiHashMap = new HashMap<>();
        int sum =0;
        for (int i = 0; i < arr.length; i++) {
            sum = sum+arr[i];
            if(sum == k)
            {
                maxLength = Math.max(maxLength, i+1);
            }
            int rem = sum-k;
            if(prefiHashMap.containsKey(rem))
            {
                int len = i-prefiHashMap.get(rem);
                maxLength = Math.max(maxLength, len);
            }
            prefiHashMap.putIfAbsent (sum, i);
        }
        return maxLength;
    }
    public static void main(String[] args) {
        int[] arr = {1,2,3,1,1,1,1,4,2,3};
        int k = 3;
        int ans = LongestWithSubArray(arr, k);
        System.out.println(ans);
    }
}
