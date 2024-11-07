#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return sum(n-1)+n;
    }
}
int main()
{
    cout<<"Enter the natural number = ";
    int n;
    cin>>n;
    int res = sum(n);
    cout<<res<<endl;
}