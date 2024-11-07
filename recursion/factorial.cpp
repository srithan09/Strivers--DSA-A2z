#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}
int main()
{
    cout<<"Enter the natural number = ";
    int n;
    cin>>n;
    int res = fact(n);
    cout<<"factorial = ";
    cout<<res<<endl;
}