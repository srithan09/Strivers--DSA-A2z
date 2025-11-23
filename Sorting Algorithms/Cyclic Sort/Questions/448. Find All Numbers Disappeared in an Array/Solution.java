import java.util.ArrayList;
import java.util.List;

public class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int i = 0;
        int n = nums.length;
        List<Integer> ans = new ArrayList<>();
        while (i<n) {
            int index = nums[i]-1;
            if (nums[i] >= 1 && nums[i] <= n && nums[i] != nums[index])
            {
                int temp = nums[i];
                nums[i] = nums[index];
                nums[index]= temp;
            }
            else
            {
                i++;
            }
        }
        for (int j = 0; j < nums.length; j++) {
            if(nums[j] != j+1)
            {
                ans.add(j+1);
            }
        }
        return ans;
    }
}
