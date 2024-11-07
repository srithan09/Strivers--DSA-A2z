#include<bits/stdc++.h>
using namespace std;
void  create_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

}
void print_map(map<int,int> mpp)
{
        for(auto it=mpp.begin();it!=mpp.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
}
void count_frequency(int arr[],int n)
{
    map<int,int> m;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp=arr[i];
        if(m.find(temp)== m.end())
        {
            m[arr[i]]=1;
        }
        else{
            m[arr[i]]=m[arr[i]]+1;
        }
    }
    print_map(m);
}
int main()
{
    int n;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;
    int a[n];
    create_array(a,n);
    cout<<"number of elements present in the array"<<endl;
    count_frequency(a,n);
    

}