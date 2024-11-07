#include<bits/stdc++.h>
using namespace std;
// sets are considerd to be an umorderd STL collection of items without duplicates
int main()
{
    // basic syntax set<datatype> var;
    set<int> s;
    int a[10]={10,20,30,40,10,20,50,80,90,100};
    for(int i=0;i<10;i++)
    {
        s.insert(a[i]);
    }
    //printing an set can be doen only by the using of the auto iterators
    for(auto it = s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    if(s.find(120)== s.end())
    {
        cout<<"element not found"<<endl;
    }
}