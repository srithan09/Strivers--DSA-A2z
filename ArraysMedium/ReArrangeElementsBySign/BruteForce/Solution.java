import java.util.ArrayList;

public class Solution {
    public static int[] Rearrange(int[] arr) // Time complexity O(2N) And Space Complexity O(N)
    {
        ArrayList<Integer> Posarr = new ArrayList<>();
        ArrayList<Integer> Negarr = new ArrayList<>();
        int n = arr.length;
        for (int i : arr) {
            if(i<0)
            {
                Negarr.add(i);
            }
            else{
                Posarr.add(i);
            }
        }
        for(int i=0;i<n/2;i++)
        {
            arr[2*i] = Posarr.get(i);
            arr[2*i+1] = Negarr.get(i);
        }
        return arr;
    }
    public static void main(String[] args) {
        int[] arr = {3,1,-2,-5,2,-4};
        Rearrange(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}
