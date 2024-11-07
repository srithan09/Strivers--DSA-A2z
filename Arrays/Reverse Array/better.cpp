#include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> arr, int start, int end) {
    if (start < end) {
    swap(arr[start], arr[end]);
    reverseArray(arr, start + 1, end - 1);
    }
}
void printArray(vector<int> arr, int n) {
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    }
}
int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    reverseArray(arr,0,arr.size()-1);
    printArray(arr,arr.size()-1);
    return 0;
}