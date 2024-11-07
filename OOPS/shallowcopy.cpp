#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    int roll;

    public:
    student(string n,int a,int r){
        this->name =n;
        this->age = a;
        this->roll = r;
    }

    student(student &s1)
    {
        this->name = s1.name;
        this->age = s1.age;
        this->roll = s1.roll;
    }

    void getInfo()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<roll<<endl;
    }
};
int main()
{
    student s1("bitch",19,531);
    student s2(s1);
    s2.getInfo();

}