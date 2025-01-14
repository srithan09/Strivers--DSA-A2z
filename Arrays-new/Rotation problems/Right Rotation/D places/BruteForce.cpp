#include<bits/stdc++.h>
using namespace std;
void RightRotate_Dplaces(vector<int> &arr,int d)
{
    int n = arr.size();
    if(n == 0) return; // Handle the case when the array is empty
    d = d%n; // Handle the case when d is greater than n

    vector<int> temp;
    for(int i = n-d;i<n;i++)
    {
        temp.push_back(arr[i]);
    }
    for(int i = n-d-1;i>=0;i--)
    {
        arr[i+d] =arr[i];
    }
    for(int i = 0;i<d;i++)
    {
        arr[i]= temp[i];
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    RightRotate_Dplaces(arr, d);

    cout << "Rotated array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}