#include<bits/stdc++.h>
using namespace std;
int Ceiling( vector<int> arr, int target)
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
int Floor(vector<int> arr, int target)
{
    int start =0;
    int end = arr.size()-1;
    int ans = arr.size();
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] <= target)
        {
            ans = mid;
            start = mid+1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 6, 8};
    int target = 4 ;
    
    int result_1 = Ceiling(arr, target);
    cout << "The Ceiling of " << target << " is: " << result_1 << endl;
    int result_2 = Floor(arr, target);
    cout << "The Floor of " << target << " is: " << result_2 << endl;
    return 0;
}