#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) {
        return false;
    }

    int original = x;
    int reversed = 0;

    while (x != 0) {
        int digit = x % 10;

        // Check for overflow before multiplying by 10
        if (reversed > (INT_MAX / 10)) {
            return false;
        }

        reversed = reversed * 10 + digit;
        x /= 10;
    }

    // Compare the original number with the reversed number
    return original == reversed;
}

int main() {
    int x = 121;
    if (isPalindrome(x)) {
        cout << x << " is a palindrome." << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }

    return 0;
}
