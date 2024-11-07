#include<bits/stdc++.h>
using namespace std;
void print_map(map<string,int> k)
{
    // always use auto iterators for the printing of the map and always use the begin() and end() function for printing
    for(auto it=k.begin(); it!=k.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
main()
{
    //basioc syntax for map -> map<key,value> var 
    map<string,int> m;
    int n;
    cout<<"enter the number of elements in the map"<<endl;
    cin>>n;
    string key;
    int value;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the key"<<" ";
        cin>>key;
        cout<<"enter the value"<<" ";
        cin>>value;
        m.insert(make_pair(key,value)); // insert function always make a pair and insert else u another method
        // m[key]=value;
    }
print_map(m);

//find function uses the key to find value cannot be used
if(m.find("three")== m.end()) // if the element is not fiound till the end of the map then "not found"
{
    cout<<"not found"<<endl;
}
else
{
    cout<<"element found"<<endl;
}

//complete clearing of the map 
m.clear();

}