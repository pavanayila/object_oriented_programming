// Default Constructor that accepts parameters with default values to set members using initialization lists
#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
    int age;
    string name;

public:
    Human(string hname = "pavan", int hage = 20) : name(hname), age(hage)
    {
        cout<<"Constructed a human called "<<name;
        cout<<", "<<age<<" years old"<<endl;
    }
};
int main()
{
    Human a;
    Human b("dharma", 18);
    return 0;
}
/*
Constructed a human called pavan, 20 years old
Constructed a human called dharma, 18 years old
*/
