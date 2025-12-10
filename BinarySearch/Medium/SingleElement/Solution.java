public class Solution {
    public static int singleNonDuplicate(int[] nums) {
        int n = nums.length;
        if (n == 1) return nums[0];
        int start = 0;
        int end = n - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (mid == 0) {
                if (nums[0] != nums[1]) return nums[0];
                else {
                    start = mid + 1;
                    continue;
                }
            }
            if (mid == n - 1) {
                if (nums[mid] != nums[mid - 1]) return nums[mid];
                else {
                    end = mid - 1;
                    continue;
                }
            }
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }
            if (mid % 2 == 0) {
                if (nums[mid] == nums[mid + 1]) {
                    start = mid + 2;
                } else {
                    end = mid - 2;
                }
            } else {
                if (nums[mid] == nums[mid - 1]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] arr = {1,1,2,3,3,4,4,8,8};
        int ans = singleNonDuplicate(arr);
        System.out.println(ans);
    }
}
