#include<bits/stdc++.h>
using namespace std;
int find_Largest(vector<int> arr)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    return arr[n-1];
}
// tc : O(N*log(N))
int main()
{
    vector<int> arr;
    arr ={100,20,789,988,34};
    int ans = find_Largest(arr);
    cout<<ans;
}