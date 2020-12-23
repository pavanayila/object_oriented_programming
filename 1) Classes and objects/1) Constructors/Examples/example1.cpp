// class Human without the default constructor enforces the creator to supply a name and age as a prerequisite to creating an object.
#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
    string name;
    int age;

public:
    Human(string hname, int hage)
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
    Human a("pavan", 20);
    Human b("dharma", 19);
    cout<<endl;

    a.Talk();
    b.Talk();
}

/*
Overloaded constructor creates pavan of age 20
Overloaded constructor creates dharma of age 19

I am pavan and am 20 years old
I am dharma and am 19 years old
*/
