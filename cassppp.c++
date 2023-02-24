#include<iostream>
using namespace std;

class base
{

    protected:
     int y = 2;
    private:
     int pvt = 3; 
      
        public:
     int x = 1;

     int getpvt()
     {
         return pvt;
     }

      

};
class derivrdbase : public base
{
    public:
    int getprot()
    {
        return y;
    }
    int getx()
    {
        return x;
    }
          
};
int main()
{
    derivrdbase obj;

    cout<<"public is ="<<obj.getx()<<endl;
    cout<<"private is ="<<obj.getpvt()<<endl;
    cout<<"protected is ="<<obj.getprot()<<endl;
}