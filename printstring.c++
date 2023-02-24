#include<iostream>
using namespace std;

int main()
{
    char name[50];

    cout<<"enetr your name : ";
    fgets(name,sizeof(name),stdin);

    cout<<"your name is :";
    puts(name);

    return 0;

}