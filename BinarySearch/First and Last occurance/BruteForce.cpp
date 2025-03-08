#include<bits/stdc++.h>
using namespace std;
vector<int> FirstAndLast(vector<int> arr , int target)
{
    int first =-1; 
    int last =-1;
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i] == target)
        {
            if(first ==-1)
            {
                first = i;
            }
            else{last =i;}
        }
    }
    return{first,last};
}
int main() {
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = FirstAndLast(arr, target);
    cout << "First Occurrence: " << result[0] << endl;
    cout << "Last Occurrence: " << result[1] << endl;
    return 0;
}