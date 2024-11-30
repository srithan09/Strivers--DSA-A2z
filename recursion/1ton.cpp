#include<bits/stdc++.h>
using namespace std;

void print(int x)
{
    if(x==1)
    {
        cout<<1<<endl;
        return;
    }
    print(x-1);
    cout<<x<<endl;
}
int main()
{
    int n;
    cin>>n;
    print(n);
}