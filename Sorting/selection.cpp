#include<bits/stdc++.h>
using namespace std;
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void selection_sort(int arr[] , int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int min;
        min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                int temp=0;
                temp=arr[min];
                arr[min]=arr[j];
                arr[j]=temp;
            }
        }
    }
    print_array(arr,n);
}
int main()
{
    int n;
    cout<<"enter number of elements =";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selection_sort(a,n);
}