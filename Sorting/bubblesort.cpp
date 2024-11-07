#include<bits/stdc++.h>
using namespace std;
void print_array(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--)
    {
        int flag=0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=0;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    print_array(arr,n);}
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
    bubble_sort(a,n);
}