#include<iostream>
#include<string>

using namespace std;

class animal
{
    private:
    string colour;

    protected:
    string type;

    public:
    void eat()
    {
        cout<<"i can eat"<<endl;
    }
    void sleep()
    {
        cout<<"i can sleep"<<endl;
    }
    void setcolour(string clr)
    {
        colour = clr;
    }
    string getcolour()
    {
        return colour;
    }
};
class dog:public animal
{
    public:
    void settype(string tp)
    {
        type = tp;
    }
    void displayinfo(string c)
    {
        cout<<"i am a"<<type<<endl;
        cout<<"my colour is"<<c<<endl;
    }
    void bark()
    {
        cout<<"i can bark! woof woof !!"<<endl;
    }
};
int main()
{
    dog dog1;
    dog1.eat();
    dog1.sleep();
    dog1.setcolour("black");

    dog1.bark();
    dog1.settype("mammal");

    dog1.displayinfo(dog1.getcolour());

    return 0;
}