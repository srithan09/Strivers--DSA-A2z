#include<bits/stdc++.h>
using namespace std;
int find_SecondLargest(vector<int> arr)
{
    int max = arr[0];
    for(int i=1;i<arr.size()-1;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    int second =-1;
    for(int i= arr.size()-2;i>=0;i--)
    {
        if(arr[i] !=max && arr[i]>second)
        {
            second = arr[i];
        }
    }
    return second;
}
//tc:O(2N)
int main()
{
    vector<int> arr;
    arr ={100,20,789,988,34};
    int ans = find_SecondLargest(arr);
    cout<<ans;
}