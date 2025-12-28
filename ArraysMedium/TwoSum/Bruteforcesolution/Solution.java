public class Solution
{
    public static boolean TwoSum(int[] arr,int k)
    {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                if(i == j)
                {
                    continue;
                }
                if(arr[i] + arr[j] == k)
                {
                    return true;
                }
            }
        }
        return false;
    }
    public static void main(String[] args) {
        int[] arr = {2,6,5,8,11};
        int target = 71;
        System.out.println(TwoSum(arr, target));
    }
}