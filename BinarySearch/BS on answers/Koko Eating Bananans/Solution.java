class Solution {
    public static int MaxElement(int[] piles) {
        int maxi = Integer.MIN_VALUE;
        for (int pile : piles) {
            if (pile > maxi) {
                maxi = pile;
            }
        }
        return maxi;
    }

public static long func(int[] piles, int hours) {
    long total = 0;
    for (int pile : piles) {
        total += (long) Math.ceil((double) pile / (double) hours);
    }
    return total;
}
    
    public static int minEatingSpeed(int[] piles, int h) {
        int start = 1;
        int end = MaxElement(piles);
        int ans = end;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            long total_hours = func(piles, mid);

            if (total_hours <= h) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        int[] arr = {30,11,23,4,20};
        int ans = minEatingSpeed(arr, 5);
        System.out.println(ans);
    }
}