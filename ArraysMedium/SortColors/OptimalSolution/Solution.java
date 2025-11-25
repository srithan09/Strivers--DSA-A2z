public class Solution {
    public static void Swap(int[] arr,int i,int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] =temp;
    }
    public static void SortColors(int[] arr)
    {
        int low = 0;
        int mid = 0;
        int high = arr.length-1;
        while(mid<=high)
        {
            if(arr[mid] == 0)
            {
                Swap(arr,low,mid);
                low++;
                mid++;
            }
            else if(arr[mid] == 1)
            {
                mid++;
            }
            else
            {
                Swap(arr, mid, high);
                high--;
            }
        }
    }
    public static void main(String[] args) {
        int[] arr = {2,0,2,1,1,0};
        SortColors(arr);
        for (int i : arr) {
            System.out.println(i);
        }
    }
}
