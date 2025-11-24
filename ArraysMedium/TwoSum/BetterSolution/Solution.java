import java.util.HashMap;

public class Solution
{
    public static int[] TwoSum(int[] arr, int k)
    {
        HashMap<Integer,Integer> sumMap = new HashMap<>();
        for (int i = 0; i < arr.length; i++) {
            int a = arr[i];
            int rem  = k-a;
            if(sumMap.containsKey(rem))
            {
                return new int[]{i,sumMap.get(rem)};
            }
            sumMap.put(arr[i], i);
        }
        return new int[]{-1,-1};
    }
    public static void main(String[] args) {
        int[] arr = {2,6,5,8,11};
        int target = 14;
        int[] ans = TwoSum(arr, target);
        for (int i : ans) {
        System.out.println(i);
        }
    }
}