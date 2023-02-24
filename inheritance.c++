#include<iostream>
using namespace std;

class animal
{
    public:
    void info()
    {
        cout<<"i am an animal."<<endl;
    }
};

class dog:public animal
{
    public:
    void bark()
    {
        cout<<"i am dog ! woof woof !!"<<endl;
    }
};

class cat:public animal
{
    public:
    void meow()
    {
        cout<<"i am cat ! meeooowwww !!"<<endl;
    }
};

int main()
{
    dog d1;
    cout<<"dog class ."<<endl;
    d1.info();
    d1.bark();
    cout<<"                     "<<endl;

    cat c1;
    cout<<"cat class ."<<endl;
    c1.info();
    c1.meow();

    return 0;

}