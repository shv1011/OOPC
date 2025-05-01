////Write a program to demonstrate scope resolution operators and reference variables in C++.

// pass by refrence
#include <iostream>
using namespace std;
void ref(int &x,int &y)
{
    x=8,y=7;
}
int main()
{
    int a=3,b=4;
    ref(a,b);
    cout<<"value of a="<<a<<endl;
    cout<<"value of b="<<b;
    return 0;
}