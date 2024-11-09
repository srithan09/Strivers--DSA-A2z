#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int> arr) {
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
    }
}
void reverse(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    while (start < end)
    {
            arr[start] = arr[start]+arr[end];
            arr[end] = arr[start]-arr[end];
            arr[start] = arr[start]-arr[end];
        
        start++;
        end--;
    }
    printArray(arr);
}
int main()
{
    vector<int> arr;
    arr={2,10,12,90,4};
    reverse(arr);
}