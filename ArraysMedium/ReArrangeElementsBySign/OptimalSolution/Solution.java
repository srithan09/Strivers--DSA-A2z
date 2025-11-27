
public class Solution {
    public static int[] Rearrange(int[] arr)
    {
        int n = arr.length;
        int[] ans = new int[n];
        int posIndex = 0;
        int negIndex = 1;
        for (int i : ans) {
            if(i<0)
            {
                ans[negIndex] = i;
                negIndex = negIndex+2;
            }
            else{
                ans[posIndex] = i;
                posIndex = posIndex+2;
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        int[] arr = {3,1,-2,-5,2,-4};
        Rearrange(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}
