#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout << endl;
}

void merge_vector(vector<int> &a ,int low ,int mid , int high)
{
    int p1=low;
    int p2=mid+1;
    vector<int> temp;
    while(p1<=mid && p2<=high)
    {
        if(a[p1]<=a[p2])
        {
            temp.push_back(a[p1]);
            p1++;
        }
        else
        {
            temp.push_back(a[p2]);
            p2++;
        }
    }
    while(p1<=mid)
    {
        temp.push_back(a[p1]);
        p1++;
    }
    while(p2<=high)
    {
        temp.push_back(a[p2]);
        p2++;
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=temp[i-low];
    }
}

void Merge_sort(vector<int> &a,int low,int high)
{
    if(low>=high) return;
    int mid=(low+high)/2;
    Merge_sort(a,low,mid);
    Merge_sort(a,mid+1,high);
    merge_vector(a,low,mid,high);
}

int main()
{
    int n;
    cout<<"enter number of elements =";
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"enter element "<<i+1<<" = ";
        cin>>x;
        a.push_back(x);
    }
    Merge_sort(a, 0, n-1);
    print_vector(a);
    return 0;
}