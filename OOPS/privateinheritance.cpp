#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;

public:
    Parent() : publicVar(1), protectedVar(2), privateVar(3) {}

    void show() {
        cout << "Public: " << publicVar << endl;
        cout << "Protected: " << protectedVar << endl;
        // Private variable cannot be accessed outside the class
        cout << "Private: " << privateVar << endl; 
    }
};

// Derived class
class Child : private Parent {
public:
    void accessBaseMembers() {
        cout << "Accessing publicVar: " << publicVar << endl;  // Accessible (public in both)
        cout << "Accessing protectedVar: " << protectedVar << endl;  // Accessible (protected in both)
        // privateVar is not accessible here
        // cout << "Accessing privateVar: " << privateVar << endl; // ERROR
    }
};

int main() {
    Child c;
    c.accessBaseMembers();
    c.accessBaseMembers();
    // c.publicVar = 10; // Accessible directly
    //c.protectedVar = 20; // Not accessible directly
}
