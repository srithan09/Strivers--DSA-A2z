#include<bits/stdc++.h>
using namespace std;
vector<int> RightRotate(vector<int> &arr)
{
    int temp = arr[arr.size()-1];
    for(int i=arr.size()-2;i>=0;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0]=temp;
    return arr;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    RightRotate(arr);

    cout << "Array after Right rotation: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}