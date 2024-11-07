#include <iostream>
using namespace std;

class Example {
private:
    int privateVar;  // Only accessible within this class

protected:
    int protectedVar;  // Accessible within this class and derived classes

public:
    int publicVar;  // Accessible from anywhere

    Example() : privateVar(10), protectedVar(20), publicVar(30) {}

    void showVars() {
        cout << "Private Variable: " << privateVar << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

class Derived : public Example {
public:
    void accessProtected() {
        // protectedVar is accessible here because Derived inherits Example
        cout << "Accessing protectedVar from Derived: " << protectedVar << endl;
    }
};

int main() {
    Example obj;
    obj.showVars();

    // obj.privateVar = 5;  // Error: privateVar is not accessible here
    // obj.protectedVar = 5; // Error: protectedVar is not accessible here
    obj.publicVar = 5;      // OK: publicVar is accessible

    Derived derivedObj;
    derivedObj.accessProtected();

    return 0;
}
