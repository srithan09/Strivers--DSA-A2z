#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    string name;
    int age;

    public:
    Animal(string name, int age){
        this->name = name;
        this->age = age;
    }
    void getInfo()
    {
        cout<<"name will be "<<name<<endl;
        cout<<"age will be "<<age<<endl;
    }
};
class Dog:private Animal
{
    public:
    string breed;
    int weight;

    public:
    Dog(string name, int age, string breed, int weight):Animal(name, age)
    {
        this->breed = breed;
        this->weight = weight;
        this->age =age;
        this->name = name;
    }
    void DogBark()
    {
        cout<<"bow .. bow"<<endl;
    }

};
int main()
{
    Dog d("Rex", 5, "German Shepherd", 50);
    //d.getInfo(); cannot be accessed
    d.DogBark(); 
}