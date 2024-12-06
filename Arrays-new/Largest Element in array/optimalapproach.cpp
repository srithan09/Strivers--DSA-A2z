#include<bits/stdc++.h>
using namespace std;
int find_Largest(vector<int> arr)
{
    int max = arr[0];
    for(int i=1;i<arr.size()-1;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
//tc:O(N)
int main()
{
    vector<int> arr;
    arr ={100,20,789,988,34};
    int ans = find_Largest(arr);
    cout<<ans;
}