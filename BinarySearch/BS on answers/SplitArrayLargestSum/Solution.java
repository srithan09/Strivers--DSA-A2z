public class Solution {
    public static int MaxElement(int[] nums) {
        int maxi = Integer.MIN_VALUE;
        for (int pile : nums) {
            if (pile > maxi) {
                maxi = pile;
            }
        }
        return maxi;
    }
    public static int SumAll(int[] nums)
    {
        int sum =0;
        for(int i : nums)
        {
            sum = sum+i;
        }
        return sum;
    }
    public static boolean isValid(int[] nums, int k,int mid)
    {
        int sum =0;
        int subArray_count =1;
        for(int i : nums)
        {
            if(sum+i <= mid)
            {
                sum = sum+i;
            }
            else
            {
                subArray_count++;
                sum = i;
            }
        }
        if(subArray_count<= k)
        {
            return true;
        }
        return false;
    }
    public static int splitArray(int[] nums, int k) {
        int start = MaxElement(nums);
        int end = SumAll(nums);
        int ans =0;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(isValid(nums,k,mid))
            {
                ans = mid;
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        int[] arr = {7,2,5,10,8};
        int k = 2;
        int ans = splitArray(arr, k);
        System.out.println(ans);
    }
}