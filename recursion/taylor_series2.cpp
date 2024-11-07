#include<bits/stdc++.h>
using namespace std;
int yatlor(int x, int n)
{
    static int s=1;
    if(n==0)
    {
        return s;
    }
        s=1+x/n*s;
        return yatlor(x,n-1);
}
int main()
{
    int x,n;
    cout<<"Enter the value of x and n"<<endl;
    cin>>x;
    cin>>n;
    cout<<"The value of y is "<<yatlor(x,n)<<endl;
}