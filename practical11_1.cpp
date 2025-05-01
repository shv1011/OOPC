// Write a program to show the working of different access specifiers.

// FOR PUBLIC →
// INSIDE CLASS:
#include<iostream>
using namespace std;
class Demo {
    public:
    void put() {
    cout<<"Hello "; //inside class
}
};
int main()
{
    Demo D1;
    D1.put();
    return 0;
}