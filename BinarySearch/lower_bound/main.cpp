#include<bits/stdc++.h>
using namespace std;
int Lower_bound(vector<int> arr, int target)
{
    int start =0;
    int end = arr.size()-1;
    int ans = arr.size();
    while(start<=end)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
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
}