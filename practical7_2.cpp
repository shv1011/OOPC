// Write a program to demonstrate implicit type casting and explicit type casting in C++.

// Explicit type casting
#include <iostream>
using namespace std;
int main(){
    int a,b;
    float res;
    a=20;
    b=5;
    cout<<"Explicit type casting"<<endl;
    cout<<"Result"<<a/b<<endl;
    cout<<"Explicit type casting"<<endl;
    res=(float)21/5;
    cout<<"value ";
    return 0;
}