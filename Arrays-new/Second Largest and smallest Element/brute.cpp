#include<bits/stdc++.h>
using namespace std;
int Second_largest(vector<int> arr)
{
    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[n-2];
}
int Second_smallest(vector<int> arr)
{
    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[2];
}
//tc O(Nlog(N))
//fails when thre is a duplicate element
int main()
{
    vector<int> arr;
    arr ={100,20,789,988,34};
    int ans1 = Second_largest(arr);
    cout<<ans1<<endl;
    int ans2 = Second_smallest(arr);
    cout<<ans2;
}