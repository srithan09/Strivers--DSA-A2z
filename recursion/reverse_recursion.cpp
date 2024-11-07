#include <iostream>
#include <utility>

using namespace std;

// Function to create an array
void create_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Function to reverse an array recursively
void reverse_rec(int p1, int p2, int arr[]) {
    if (p1 >= p2) {
        return;
    }
    swap(arr[p1], arr[p2]);
    reverse_rec(p1 + 1, p2 - 1, arr);
}

// Function to print an array
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Added newline for better output
}

int main() {
    int n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;
    int arr[n];
    create_array(arr, n);
    cout << "Original array: ";
    print_array(arr, n);
    reverse_rec(0, n - 1, arr); // Pass the correct indices
    cout << "Reversed array: ";
    print_array(arr, n);
    return 0;
}