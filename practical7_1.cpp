// Write a program to demonstrate implicit type casting and explicit type casting in C++.

// Implicit type casting

#include <iostream>
using namespace std;
int main()
{
    short x=200;
    int y;
    y=x;
    cout<<"Implicit type casting"<<endl;
    cout<<"The value of x = "<<x<<endl;
    cout<<"The value of y = "<<y<<endl;
    int num=20;
    char ch='a';
    int res=20+'a';
    cout<<"Typecasting char to int data type('a' to 20): "<<res<<endl;
    float val=num+'A';
    cout<<"Typecasting from int to float data type('A' to 20):"<<val<<endl;
    return 0;
}