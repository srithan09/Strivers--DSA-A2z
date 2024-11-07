#include<bits/stdc++.h>
using namespace std;

void TwoSum(vector<int> arr,int target)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(i == j) 
            continue;
            if(arr[i] + arr[j] == target)
            {
                cout << "Pair found: "<< arr[i] << " " << arr[j] << endl;
                break;
            }
        }
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
    TwoSum(arr,target);
}