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
    Demo D1;
    D1.put();
    return 0;
}