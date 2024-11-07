#include<bits/stdc++.h>
using namespace std;
void print_array(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void insertion_sort(int arr[],int n){
    for(int i=1;i<=n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
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
    insertion_sort(a,n);
}