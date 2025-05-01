//Write a program to demonstrate different types of user defined functions and function calls.

#include <iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int main()
{
    int a=10,b=10;
    int sum=add(a,b);
    cout<<"the sum is: "<<sum<<"\n";
    int d=sum/10;
    cout<<"the div is: "<<d;
    return 0;
}