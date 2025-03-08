#include<bits/stdc++.h>
using namespace std;

int FirstOccurance(vector<int> arr , int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int first = -1;
    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return first;
} 

int LastOccurance(vector<int> arr , int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int last = -1;
    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return last;
} 

vector<int> searchRange(vector<int>& nums, int target) {
    int first = FirstOccurance(nums, target);
    if(first == -1)
    {
        return {-1, -1};
    }
    int last = LastOccurance(nums, target);
    return {first, last};
}

int main() {
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = searchRange(arr, target);
    cout << "First Occurrence: " << result[0] << endl;
    cout << "Last Occurrence: " << result[1] << endl;
    return 0;
}