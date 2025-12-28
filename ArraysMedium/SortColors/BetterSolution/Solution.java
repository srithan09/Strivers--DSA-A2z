
public class Solution {
    public static void SortColors(int[] arr)
    {
        int count_0 =0;
        int count_1 =0;
        int count_2 =0;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] == 0)
            {
                count_0++;
            }
            else if(arr[i] == 1)
            {
                count_1++;
            }
            else
            {
                count_2++;
            }
        }
        for(int i=0;i<count_0;i++)
        {
            arr[i] =0;
        }
        for(int i=count_0;i<count_0+count_1;i++)
        {
            arr[i] = 1;
        }
        for(int i=count_0+count_1;i<arr.length;i++)
        {
            arr[i] = 2;
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
