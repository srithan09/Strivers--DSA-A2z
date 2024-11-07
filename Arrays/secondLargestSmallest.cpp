#include<bits/stdc++.h>
using namespace std;
int secondLargest(int n, vector<int> a) {
    int max = a[0];
    int smax = INT_MIN;
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            smax = max;
            max = a[i];
        } else if(a[i] > smax && a[i] != max) {
            smax = a[i];
        }
    }
    return smax;
}

int secondSmallest(int n, vector<int> a) {
    int min = a[0];
    int smin = INT_MAX;
    for(int i = 1; i < n; i++) {
        if(a[i] < min) {
            smin = min;
            min = a[i];
        } else if(a[i] < smin && a[i] != min) {
            smin = a[i];
        }
    }
    return smin;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slargest = secondLargest(n, a);
    int ssmallest = secondSmallest(n, a);
    return {slargest, ssmallest};
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> result = getSecondOrderElements(n, a);
    cout << "Second largest element: " << result[0] << endl;
    cout << "Second smallest element: " << result[1] << endl;
    return 0;
}