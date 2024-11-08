#include<bits/stdc++.h>
using namespace std;

bool TwoSum(vector<int> arr, int target) {
    int right = arr.size() - 1;
    int left = 0;
    sort(arr.begin(), arr.end()); // Sort the array to use two pointers
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return true; // Found a pair that sums to target
        } else if (sum < target) {
            left++; // Move left pointer to the right to increase the sum
        } else {
            right--; // Move right pointer to the left to decrease the sum
        }
    }
    return false; // No pair found
}

int main() {
    vector<int> arr;
    int target = 14;
    arr.push_back(2);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(11);
    
    bool res = TwoSum(arr, target);
    cout << res << endl; // Output the result
}