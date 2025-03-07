#include<bits/stdc++.h>
using namespace std;
int Lower_bound( vector<int> arr, int target)
{
    int start =0;
    int end = arr.size()-1;
    int ans = arr.size();
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] >= target)
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
int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 6, 8};
    int target = 4 ;
    
    int result = Lower_bound(arr, target);
    cout << "The upper_bound index of " << target << " is: " << result << endl;

    return 0;
}