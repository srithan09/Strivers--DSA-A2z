#include <iostream>
using namespace std;

struct Example {
    char a;      // 1 byte
    int b;       // 4 bytes
    char c;      // 1 byte
};

int main() {
    cout << "Size of struct: " << sizeof(Example) << " bytes" << endl;
    return 0;
}
