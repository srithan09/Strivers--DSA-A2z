public class Solution {
    public static void CycleSort(int[] arr)
    {
        int i = 0;
        int n = arr.length;
        while (i<n) {
            int index = arr[i]-1;
            if (arr[i] >= 1 && arr[i] <= n && arr[i] != arr[index])
            {
                int temp = arr[i];
                arr[i] = arr[index];
                arr[index]= temp;
            }
            else
            {
                i++;
            }
        }
    }
}
