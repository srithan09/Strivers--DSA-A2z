
public class Solution {
    public static int majorityElement(int[] nums) {
        int el = 0;
        int count =0;
        for(int i=0;i<nums.length;i++)
        {
            if(count == 0)
            {
                el = nums[i];
                count++;
            }
            else if(el == nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return el;
    }
    public static void main(String[] args) {
        int[] arr = {2,2,1,1,1,2,2};
        System.out.println(majorityElement(arr));
    }
}
