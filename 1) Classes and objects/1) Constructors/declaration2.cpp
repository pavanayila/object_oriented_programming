// Constructor overloading
#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
    string name;
    int age;
public:
    Human() // default constructor
    {
        age = 0;
        cout<<"Default constructor name and age not set"<<endl;
        cout<<"The age is "<<age<<endl;
    }

    Human(string hname, int hage)
    {
        name = hname;
        age = hage;
        cout<<"Overloaded constructor creates"<<endl;
        cout<<name<<" of "<<age<<" years "<<endl;
        cout<<"The age is "<<age<<endl;
    }

    void Introduce()
    {
        cout<<"Hello "<<endl;
    }
};
int main()
{
    Human h;
    h.Introduce();
    cout<<endl;

    Human t("pavan", 20);
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
