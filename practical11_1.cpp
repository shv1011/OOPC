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
    cout << "Name : Shreya Vadukar" <<"\n"<<"Enrollment number : 24BT04175"<<endl;
    Demo D1;
    D1.put();
    return 0;
}