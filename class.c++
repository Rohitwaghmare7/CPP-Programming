
#include <iostream>
using namespace std;

int a,b,c;

class Room
{
   public:
    double length;
    double breadt;
    double height;

    double calculateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Room room1;
    room1.length = 45;
    room1.breadth = 78;
    room1.height = 87;

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}


