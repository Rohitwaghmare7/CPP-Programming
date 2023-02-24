#include<iostream>
using namespace std;
 void find(int n)
{
    if(n%2==0)
{
    cout<<n<<" is an Even number"<<endl;
}
else
{
    cout<<n<<" is an odd number"<<endl;
}
//cout<<endl<<"------------------------------------";
}
void find(int a,int b)
{
    int c;
    c=a+b;
    cout<<a<<" + "<<b<<" = "<<c<<endl;
}
int main()
{
    find(5);
    find(20,20);
    return 0 ;
}