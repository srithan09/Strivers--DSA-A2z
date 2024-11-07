#include<bits/stdc++.h>
using namespace std;

bool f(int i, string s) {
    int n = s.size();
    if(i >= n/2) {
        return true;
    } else if(s[i] != s[n-i-1]) {
        return false; 
    }
    return f(i+1, s);
}

int main() {
    string s;
    int i = 0;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Palindrome or not: ";
    cout << (f(i, s) ? "Yes" : "No") << endl;
    return 0;
}