#include <bits/stdc++.h>
using namespace std;
void print_array(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<endl;
    }
}

void move_zeros_end(int arr[] , int n)
{
    int p1 = 0;
    for(int i=0;i<n ; i++)
    {
        if(arr[i]!=0)
        {
            arr[p1] = arr[i];
            p1++;
        }
    }
    for(int i=p1;i<n;i++)
    {
        arr[i] = 0;
    }
    print_array(arr, n);
}
int main()
{
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    move_zeros_end(arr , x);
}