import java.util.ArrayList;

public class Solution {
    public static void merge(int[] arr,int start,int mid,int end) //O(n)
    {
        ArrayList<Integer> temp = new ArrayList<>();
        int i = start;
        int j = mid+1;
        while (i<= mid && j<= end) {
            if(arr[i]>arr[j])
            {
                temp.add(arr[j]);
                j++;
            }
            else
            {
                temp.add(arr[i]);
                i++;
            }
        }
        while (i<= mid) {
            temp.add(arr[i]);
            i++;
        }
        while (j<= end) {
            temp.add(arr[j]);
            j++;
        }
        for (int j2 = 0; j2 < temp.size(); j2++) {
            arr[j2+start] = temp.get(j2);
        }
    }
    public static void mergeSort(int[] arr , int start, int end) //O(Log(n))
    {
        if(start >= end)
        {
            return;
        }
        int mid = start + (end-start)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr,start,mid,end);
    }
    public static void main(String[] args) {
        int[] arr = {5, 2, 9, 1, 5, 6};
        Solution.mergeSort(arr, 0, arr.length - 1);
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
