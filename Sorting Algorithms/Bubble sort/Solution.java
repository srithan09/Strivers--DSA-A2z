
public class Solution {
    public static void Swap(int[] arr,int i, int j)
    {
        int temp  = arr[i];
        arr[i]= arr[j];
        arr[j] = temp;
    }
    public static void BubbleSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    Swap(arr, j, j + 1);
                }
            }
        }
    }
    public static void main(String[] args) {
        int[] arr = {71,18,67,53,1,25};
        BubbleSort(arr);
    }
}
