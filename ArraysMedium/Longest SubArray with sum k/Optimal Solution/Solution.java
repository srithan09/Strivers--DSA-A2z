
public class Solution {
    public static int LongestWithSubArray(int[] arr,int k)
    {
        int n = arr.length;
        int maxLength =0;
        int sum =0;
        int right =0;
        int left =0;
        while (right <n) {
            while (left <= right && sum<k) {
                sum = sum-arr[left];
            }
            if(sum == k)
            {
                maxLength = Math.max(maxLength, right-left+1);
            }
            right++;
            if(right <n)
            {
                sum = sum+arr[right];
            }
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
