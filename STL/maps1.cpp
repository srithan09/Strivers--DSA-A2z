#include<bits/stdc++.h>
using namespace std;
// question every elemnt present in the array must contains the location in the form of {r,c}
int main()
{
    int arr[100][100];
    map<int, pair<int,int>> m1; // key-> int ,  value->{int,int}
    int r,c;
    cin>>r;
    cin>>c;
    arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c ; j++)
        {
            pair<int,int> p;
            p.first = i;
            p.second=j;
            m1[arr[i][j]]= p;
        }
    }
    for(auto it = m1.begin();it!=m1.end();it++)
    {
        cout<<it->first<<" ";
        //printing a pairs can't be done in a single go so we need to initialize another pair
        pair<int,int> q=it->second;
        cout<<"{"<<q.first<<","<<q.second<<"}"<<endl;
    }
}