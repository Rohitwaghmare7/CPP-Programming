#include<iostream>
using namespace std;

class student
{
    public:
    double marks1,marks2;
};

student createstudent()
{
    student student;

    student.marks1 = 80.6;
    student.marks2 = 50.6;

    cout<<"marks 1 ="<<student.marks1<<endl;
    cout<<"marks 2 ="<<student.marks2<<endl;

    return student;
}
int main()
{
    student studen1;
    studen1 = createstudent();
    return 0;
}
