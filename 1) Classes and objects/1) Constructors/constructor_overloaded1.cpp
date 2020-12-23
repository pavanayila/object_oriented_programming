// Constructor overloading
#include<iostream>
#include<string>
using namespace std;

class Human
{
public:
    string name;
    int age;

    Human() // default constructor
    {
        age = 0;
        cout<<"Default constructor name and age not set"<<endl;
    }

    Human(string hname, int hage) // overloaded constructor
    {
        name = hname;
        age = hage;
        cout<<"Overloaded constructor creates"<<endl;
        cout<<name<<" of "<<age<<" years "<<endl;
    }

    void Introduce()
    {
        cout<<"Hello "<<endl;
    }
};
int main()
{
    Human h;
    cout<<"The age is "<<h.age<<endl;
    h.Introduce();
    cout<<endl;

    Human t("pavan", 20);
    cout<<"The age is "<<t.age<<endl;
    t.Introduce();
    return 0;
}
/*
Default constructor name and age not set
The age is 0
Hello

Overloaded constructor creates
pavan of 20 years
The age is 20
Hello
*/
