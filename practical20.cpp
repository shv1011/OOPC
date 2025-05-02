// Explain the behaviour of the constructor in derived class using an example.

#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor\n";
    }
};

int main() {
    cout << "Name : Shreya Vadukar" <<"\n"<<"Enrollment number : 24BT04175"<<endl;
    Derived d;
    return 0;
}