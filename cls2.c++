#include<iostream>
using namespace std;
class marks
{
    public:
    int s1,s2,s3,total,avg;
        void getMarks()
        {
        cout<<"Enter the values for 3 subject marks: ";
        cin>>s1>>s2>>s3;
        total = s1+s2+s3;
        avg = total/3;
        }
};
class result : public marks
{
    public: 
    void getResult()
    {
    cout<<"Total Marks : "<<total<<endl;
    cout<<"Average Marks : "<<avg;
    }
}obj;
int main()
{
    obj.getMarks();
    obj.getResult();
    return 0 ;
}