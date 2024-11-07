#include<bits/stdc++.h>
using namespace std;

int LongestSubArray(vector<int> a, int k) {
    int length = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = i; j < a.size(); j++) {
            int sum = 0;
            for (int l = i; l <= j; l++) {
                sum += a[l];
            }
            if (sum == k) {
                length = max(length, j - i + 1); // Corrected length calculation
            }
        }
    }
    return length;
}
int main()
{
    vector<int> a ={1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    cout<<LongestSubArray(a,k)<<endl;
}