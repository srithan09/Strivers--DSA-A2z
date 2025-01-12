#include<bits/stdc++.h>
using namespace std;
vector<int> LeftRotate(vector<int> &arr)
{
    int temp = arr[0];
    for(int i=1;i<arr.size();i++)
    {
        arr[i-1] = arr[i];
    }
    arr[arr.size()-1]=temp;
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

    LeftRotate(arr);

    cout << "Array after left rotation: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}