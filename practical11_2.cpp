// Write a program to show the working of different access specifiers.

// OUTSIDE CLASS:
#include<iostream>
using namespace std;
class Demo {
public:
    void put();
};
void Demo::put()
//scope resolution operator used to define class member function outside the class.
{
    cout<<"Hello there!! "; //outside class
}
int main(){
    cout << "Name : Shreya Vadukar" <<"\n"<<"Enrollment number : 24BT04175"<<endl;
    Demo D1;
    D1.put();
    return 0;
}