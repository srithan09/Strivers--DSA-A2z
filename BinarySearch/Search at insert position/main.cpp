#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) 
{
        int start = 0;
        int end = nums.size()-1;
        int ans = nums.size();
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            if(nums[mid]>= target)
            {
                ans = mid;
                end = mid - 1;
            }
            else 
            {
                start = mid+1;
            }
        }
        return ans;
}
int main()
{
    vector<int> arr = {1,3,4,7};
    int target = 6;
    int ans  = searchInsert(arr,target);
    cout<<ans<<endl;
}