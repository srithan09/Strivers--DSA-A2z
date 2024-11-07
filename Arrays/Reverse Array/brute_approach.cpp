#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int>& arr) // Pass by reference
{
    vector<int> temp; // Usage of auxiliary array
    for (int i = arr.size() - 1; i >= 0; i--) // Fix the loop index
    {
        temp.push_back(arr[i]);
    }
    arr = temp; // Now arr will be the reversed vector
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl; // Print the reversed array
    }
}
int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    reverse(arr);
    return 0;
}
