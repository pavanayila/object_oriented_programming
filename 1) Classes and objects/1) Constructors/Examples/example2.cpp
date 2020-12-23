// Constructor parameters with default values
#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
    string name;
    int age;

public:
    Human(string hname, int hage = 25)
    {
        name = hname;
        age = hage;
        cout<<"Overloaded constructor creates "<<name;
        cout<<" of age "<<age<<endl;
    }

    void Talk()
    {
        cout<<"I am " + name<<" and am ";
        cout<<age<<" years old"<<endl;
    }
};

int main()
{
    Human a("pavan");   // pavan.age is assigned a default value 25
    Human b("dharma", 19); // dharma.age is assigned 19 as specified.
    cout<<endl;

    a.Talk();
    b.Talk();
}

/*
Overloaded constructor creates pavan of age 25
Overloaded constructor creates dharma of age 19

I am pavan and am 25 years old
I am dharma and am 19 years old
*/
