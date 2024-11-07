#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    double *cgpaptr;

    public:
    student(string n,double a){
        this->name = n;
        cgpaptr = new double; // Initialize the pointer
        *cgpaptr = a;
    }

    student(const student &s1){ 
        this->name = s1.name;
        cgpaptr = new double;
        *cgpaptr = *(s1.cgpaptr);
    }

    void getInfo(){
        cout<<name<<endl;
        cout<< *cgpaptr<<endl;
    }
};

int main(){
    student s1("bitch", 8.4);
    student s2(s1);
    s2.getInfo();

    return 0;
}