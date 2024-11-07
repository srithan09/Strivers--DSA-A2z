#include<bits/stdc++.h>
using namespace std;
int LongestSubArray(vector<int> arr , int k)
{
    int length=0;
    map<int,int> PrefixSumMap;
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum +=arr[i];
        if(sum == k)
        {
            length=max(length,i+1);
        }
        if(PrefixSumMap.find(sum-k)!=PrefixSumMap.end())
        {
            int temp = i-PrefixSumMap[sum-k];
            length=max(length,temp);
        }
        if(PrefixSumMap.find(sum) == PrefixSumMap.end())
        {
            PrefixSumMap[sum] = i;
        }
    }
    return length;
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