// Constructor declaration inside the class
#include<iostream>
#include<string>
using namespace std;

class Human
{
public:
    Human()
    {
        cout<<"The code in the constructor is executed first"<<endl;
    }

    void Introduce()
    {
        cout<<"Hello World"<<endl;
    }
};
int main()
{
    Human h;
    h.Introduce();
    return 0;
}
/*
The code in the constructor is executed first
Hello World
*/
