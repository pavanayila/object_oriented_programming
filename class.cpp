#include<iostream>
#include<string>
using namespace std;
class Human
{
    public:
    string name;
    int age;
    string gender;

    void Introduce()
    {
        cout<<"Hello Everyone!"<<endl;
        cout<<"My name is : "<<name<<endl;
        cout<<"I am "<<age<<" years old"<<endl;
    }
};

int main()
{
    int a;
    a = 20;
    cout<<"The value of variable a contains: "<<a<<endl;
    cout<<endl;

    Human h;
    h.name = "dharma";
    h.age = 18;
    h.gender = "male";
    cout<<h.name<<endl;
    cout<<h.age<<endl;
    cout<<h.gender<<endl;
    h.Introduce();
    cout<<endl;

    // Allocating memory dynamically
    int *p = new int;
    *p = 10;
    cout<<"The value of *p is "<<*p<<endl;
    delete p;
    cout<<endl;

    Human *i = new Human();
    (*i).name = "pavan";
    (*i).age = 20;
    (*i).gender = "male";
    cout<<(*i).name<<endl;
    cout<<(*i).age<<endl;
    cout<<(*i).gender<<endl;
    (*i).Introduce();
    delete i;
    cout<<endl;

    Human *j = new Human();
    j->name = "siva";
    j->age = 19;
    j->gender = "male";
    cout<<j->name<<endl;
    cout<<j->age<<endl;
    cout<<j->gender<<endl;
    j->Introduce();
    delete j;
    return 0;
}

/*

The value of variable a contains: 20

dharma
18
male
Hello Everyone!
My name is : dharma
I am 18 years old

The value of *p is 10

pavan
20
male
Hello Everyone!
My name is : pavan
I am 20 years old

siva
19
male
Hello Everyone!
My name is : siva
I am 19 years old
*/
