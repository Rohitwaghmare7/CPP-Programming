#include<iostream>
using namespace std;
class student
{
    public:
        int rno;
        char name[25];
        float fees;

        void getData(){
            cout<<"Enter the values for Roll No, name and fees: ";
            cin>>rno>>name>>fees;
        }
        void showData() {
            cout<<rno<<"\t"<<name<<"\t"<<fees;
        }
}obj;
int main()
{
    obj.getData();
    obj.showData();
    return 0;

}