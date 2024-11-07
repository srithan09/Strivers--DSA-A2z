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
void Frequencies_of_Limited_Range(int arr[],int n)
{
    int temp=0;
    map<int,int> mpp;
    for(int i=1;i<=n;i++)
    {
        temp=i;
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==temp)
            {
                count++;
            }
        }
        mpp[i]=count;
    }
    print_map(mpp);
}
int main()
{
    int n;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;
    int a[n];
    create_array(a,n);
    cout<<"Frequencies_of_Limited_Range in array"<<endl;
    Frequencies_of_Limited_Range(a,n);
}