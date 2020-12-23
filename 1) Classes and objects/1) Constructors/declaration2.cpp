// Constructor declaration outside the class
#include<iostream>
#include<string>
using namespace std;

class Human
{
public:
    Human();

    void Introduce()
    {
        cout<<"Hello World"<<endl;
    }
};
Human::Human()
{
    cout<<"The code in the constructor is executed first"<<endl;
}
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
