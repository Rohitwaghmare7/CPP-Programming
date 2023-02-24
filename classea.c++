#include<iostream>
using namespace std;

class animal
{
    public:
    void eat()
    {
        cout<<"i can eat"<<endl;
    }
    void sleep()
    {
        cout<<"i can sleep"<<endl;
    }
};
class dog: public animal
{
    public:
    void colour()
    {
        cout<<"black"<<endl;
    }
};
int main()
{

    dog d1;

    d1.eat();
    d1.sleep();
    d1.colour();

    return 0;
}