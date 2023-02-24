#include<iostream>
using namespace std;

class Distance
{
    private:
    int meter = 99;

    friend int addfive(Distance);

    public:
    Distance():meter(0){}
};
int addfive(Distance D)
{
    D.meter += 5;
    return D.meter;
}
int main()
{
    Distance d;
    cout<<"distance :"<<addfive(d);
    return 0;
}
