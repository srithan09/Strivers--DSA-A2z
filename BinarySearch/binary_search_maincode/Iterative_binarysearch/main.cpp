#include<bits/stdc++.h>
using namespace std;
int BinarySearch_iterative(vector<int> arr,int target)
{
    int right =arr.size()-1 ;
    int left =0;
    
    while(left<=right)
    {
        int mid = left + (right-left)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid]> target)
        {
            right = mid - 1;
        }
        else if(arr[mid]<target)
        {
            left = mid + 1;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {2, 3, 4, 10, 40};
    int target = 10;
    int result = BinarySearch_iterative(arr, target);

    if (result != -1) {
        cout << "Element found at index " << result <<endl;
    } else {
        cout << "Element not found in array" << endl;
    }

    return 0;
}