#include<iostream>
using namespace std;

int main()
{
    double n,sum=0;

    do
    {
        cout<<"enetr number"<<endl;
        cin>>n;
        sum += n;
    } while (n != 0);
    {
        cout<<"sum = "<<sum<<endl;
    }
    return 0;
    
}