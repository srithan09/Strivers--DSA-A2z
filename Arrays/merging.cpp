#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeTwo(const vector<int>& a, const vector<int>& b) {
    int n = a.size();
    int m = b.size();
    vector<int> c(n + m);

    // Copy elements from a to c
    for (int i = 0; i < n; i++) {
        c[i] = a[i];
    }

    // Copy elements from b to c
    for (int i = 0; i < m; i++) {
        c[n + i] = b[i];
    }

    return c;
}

int main() {
    // Example usage
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {6, 7, 8, 9, 10};

    vector<int> result = mergeTwo(a, b);

    // Print the merged vector
    cout << "Merged Vector: ";
    for (const auto& element : result) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}