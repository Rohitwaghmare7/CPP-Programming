#include<iostream>
using namespace std;

class base
{
    public:
    void print()
    {
        cout<<"this is base"<<endl;
        
    }
};

class derived:public base
{
    public:
    void print()
    {
        cout<<"this is derived"<<endl;
        base::print();
    }
};

int main()
{
    derived obj;
    obj.print();
    return 0;
}