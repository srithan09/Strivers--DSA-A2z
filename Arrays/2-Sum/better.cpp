#include<bits/stdc++.h>
using namespace std;
void betterTwoSum(vector<int> arr , int target)
{
    map<int,int> m;
    for(int i=0;i<arr.size();i++)
    {
        int temp  = target-arr[i];
        if(m.find(temp)!= m.end())
        {
            int t = m[temp];
            cout << "Pair found: "<< arr[i] << " " << arr[t] << endl;
        }
        m[arr[i]]=i;
    }
}
int main()
{
    vector<int> arr;
    int  target =14;
    arr.push_back(2);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(11);
    betterTwoSum(arr,target);
}