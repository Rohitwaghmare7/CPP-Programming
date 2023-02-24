#include<iostream>
#include<stdlib.h>

using namespace std;

class twostacks
{
    int * arr;
    int size;
    int top1,top2;

    public:
    twostacks(int n)
    {
        size = n;
        arr = new int[n];
        top1 = n/2+1;
        top2 = n/2;
    }
    void push1 (int x)
    {
    if (top1>0)
    {
        top1--;
        arr[top1]=x;
    }
    else
    {
        cout<<"stack overflow"<<"by element"<<x<<endl;
        return;
    }
    }
    void puch2(int x)
    {
        if (top2 < size)
    }
}