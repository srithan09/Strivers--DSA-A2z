#include<bits/stdc++.h>
using namespace std;
int Second_smallest(vector<int> arr)
{
    int min = INT_MAX;
    int min2=INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < min) {
            min2 = min; // Update second smallest
            min = arr[i]; // Update smallest
        } else if (arr[i] < min2 && arr[i] != min) {
            min2 = arr[i]; // Update second smallest if it's not equal to the smallest
        }
    }
    return min2;
}
int main()
{
    vector<int> arr;
    arr ={100,20,789,988,34};

    int ans2 = Second_smallest(arr);
    cout<<ans2<<endl;
}