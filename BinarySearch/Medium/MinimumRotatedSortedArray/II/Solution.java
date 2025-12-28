
public class Solution {
    public static int  MinimumSorted(int[] arr)
    {
        int ans = Integer.MAX_VALUE;
        int start = 0;
        int end = arr.length-1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(arr[mid] == arr[end])
            {
                ans = Math.min(arr[mid], ans);
                end--;
            }
            else if(arr[mid]>arr[end])
            {
                    ans =Math.min(arr[start],ans);
                    start = mid+1;
            }
            else
                {
                    ans = Math.min(arr[end],ans);
                    end = mid-1;
                }
        }
        return ans;
    }
    public static void main(String[] args) {
        int[] arr = {2,2,2,0,1};
        int ans = MinimumSorted(arr);
        System.out.println(ans);
    }
}
