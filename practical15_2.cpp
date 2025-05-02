// Constructor over ridding 
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived show()" << endl;
    }
};

int main() {
    cout << "Name : Shreya Vadukar" <<"\n"<<"Enrollment number : 24BT04175"<<endl;
    Base* b;
    Derived d;
    b = &d;
    b->show(); // Output: Derived show()
    return 0;
}