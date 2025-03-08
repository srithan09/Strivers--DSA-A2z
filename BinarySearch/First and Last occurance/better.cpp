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
int upper_bound( vector<int> arr, int target)
{
    int start =0;
    int end = arr.size()-1;
    int ans = arr.size();
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] >target)
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
vector<int> FirstAndLast(vector<int> arr , int target)
{
    int first = Lower_bound(arr,target);
    if(first == arr.size() || arr[first] != target)
    {
        return{-1,-1};
    }
    int last = upper_bound(arr,target)-1;
    return{first,last};
}
int main() {
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = FirstAndLast(arr, target);
    cout << "First Occurrence: " << result[0] << endl;
    cout << "Last Occurrence: " << result[1] << endl;
    return 0;
}