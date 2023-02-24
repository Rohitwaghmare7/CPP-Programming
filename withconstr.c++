#include<iostream>
using namespace std;

class student
{
    public:
    double marks;

    student(double m)
    {
        marks = m;
    }
};
void calculateavg(student s1,student s2)
{
    double avg = (s1.marks + s2.marks)/2;
    cout<<"avg marks = "<<avg<<endl;
}
int main()
{
    student student1(80.6) , student2(90.7);
    calculateavg(student1,student2);
    return 0;
}