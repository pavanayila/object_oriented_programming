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
    Human(string hname = "pavan", int hage = 25)
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
    Human a;
    Human b("dharma", 20);
    cout<<endl;

    a.Talk();
    b.Talk();


}

/*
Overloaded constructor creates pavan of age 25
Overloaded constructor creates dharma of age 20

I am pavan and am 25 years old
I am dharma and am 20 years old
*/
