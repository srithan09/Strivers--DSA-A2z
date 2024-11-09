#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int n = nums.size();
    for (int j = 0; j < n; j++) {
        if (nums[j] == 0) {
            count0++;
        } else if (nums[j] == 1) {
            count1++;
        } else {
            count2++;
        }
    }
    for (int i = 0; i < count0; i++) {
        nums[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++) {
        nums[i] = 1;
    }
    for (int i = count0 + count1; i < n; i++) {
        nums[i] = 2;
    }
}
int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortColors(nums);
    cout << "Sorted colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}