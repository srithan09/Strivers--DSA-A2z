import java.util.Arrays;

public class Solution {
    public static boolean TwoSum(int[] arr,int k)
    {
        int left = 0;
        int right = arr.length-1;
        Arrays.sort(arr);
        while (left < right) {
            int sum = arr[left]+arr[right];
            if(sum>k)
            {
                right--;
            }
            else if(sum<k)
            {
                left++;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
    public static void main(String[] args) {
        int[] arr = {2,6,5,8,11};
        int target = 14;
        System.out.println(TwoSum(arr, target));
    }
}
