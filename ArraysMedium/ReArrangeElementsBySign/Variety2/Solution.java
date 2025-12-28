import java.util.ArrayList;

public class Solution {
    public static int[] Rearrange(int[] arr)
    {
        ArrayList<Integer> positveList = new ArrayList<>();
        ArrayList<Integer> negativeList = new ArrayList<>();
        int n = arr.length;
        for(int i : arr)
        {
            if(i<0)
            {
                negativeList.add(i);
            }
            else
            {
                positveList.add(i);
            }
        }
        if(positveList.size() == negativeList.size())
        {
            for(int i=0;i<n/2;i++)
        {
            arr[2*i] = positveList.get(i);
            arr[2*i+1] = negativeList.get(i);
        }
        }
        else if(positveList.size() > negativeList.size())
        {
            for (int i = 0; i < negativeList.size(); i++) {
                arr[2*i] = positveList.get(i);
                arr[2*i+1] = negativeList.get(i);
            }
            int index = negativeList.size()*2;
            for(int i= index;i<positveList.size();i++)
            {
                arr[index] = positveList.get(i);
                index++;
            }
        }
        else{
            for (int i = 0; i < positveList.size(); i++) {
                arr[2*i] = positveList.get(i);
                arr[2*i+1] = negativeList.get(i);
            }
            int index = positveList.size()*2;
            for(int i= index;i<negativeList.size();i++)
            {
                arr[index] = negativeList.get(i);
                index++;
            }
        }
        return arr;
    }

    public static void main(String[] args) {
        
    }
}
