import java.util.Arrays;

public class Solution {
    public static int BinarySearch(int[] arr,int target)
    {
        Arrays.sort(arr);
        int start =0;
        int end = arr.length-1;
        while(start <= end)
        {
            int mid= start + (end-start)/2;
            if(arr[mid] == target)
            {
                return mid;
            }
            else if(arr[mid]>target)
            {
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int [] arr = {7,12,4,2,20};
        int target = 12;
        int ans = BinarySearch(arr, target);
        System.out.println(ans);
    }
}
