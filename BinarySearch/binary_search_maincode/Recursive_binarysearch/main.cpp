#include <bits/stdc++.h>
using namespace std;

int BinarySearch_recursive(vector<int> arr, int target, int start, int end) {
    if (start > end) {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return BinarySearch_recursive(arr, target, start, mid - 1);
    } else {
        return BinarySearch_recursive(arr, target, mid + 1, end);
    }
}

int main() {
    vector<int> arr = {2, 3, 4, 10, 40};
    int target = 10;
    int start = 0;
    int end = arr.size() - 1;
    int result = BinarySearch_recursive(arr, target, start, end);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in array" << endl;
    }

    return 0;
}