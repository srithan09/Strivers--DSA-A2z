
public class Solution {
    public static int LargestElement(int[] arr)
    {
        int max = Integer.MIN_VALUE;
        for (int i : arr) {
            if(i>max)
            {
                max = i;
            }
        }
        return max;
    }
    public static void main(String[] args) {
        int [] arr = {7,12,4,2,20};
        int ans = LargestElement(arr);
        System.out.println(ans);
    }
}
