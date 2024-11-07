#include<bits/stdc++.h>
using namespace std;

//vectors they are considerd to be orderd type STL and also dynamic array

int main()
{
    // basic syntax vector<data Type>var;
    vector<int>vec;
    vec.push_back(23); //inserting an element
    vec.push_back(45);
    vec.push_back(67);
    vec.push_back(89);
    vec.push_back(12);
    for(int i=0;i<vec.size(); i++)
    {
        cout<<vec[i]<<endl;
    }
    if(vec.empty())
    {
        cout<<"vector is empty"<<endl;
    }
    //sorting of the vector
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size(); i++)
    {
        cout<<vec[i]<<endl;
    }
    vec.clear();


}