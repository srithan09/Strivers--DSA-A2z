#include<bits/stdc++.h>
using namespace std;
// two pointer method
int LongestSubArray(vector<int>arr, int k)
{
    int n = arr.size();
    int right=0;
    int left =0;
    int maxLen = 0;
    int sum = 0;
    while(right<n)
    {
        while (sum >k)
        {
            sum -=arr[left];
            left++;
        }
        if(sum == k)
        {
            maxLen = max(maxLen,right-left+1);
        }
        right++;
        if(right<n)
        {
            sum += arr[right];
        }
    }
    return maxLen;
}
int main()
{
    vector<int> arr;
    int n,k;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Enter the sum of the sub-array to be calculated = ";
    cin>>k;
    int result = LongestSubArray(arr,k);
    cout<<result<<endl;
}