// Write a program to demonstrate the concept of polymorphism and exception handling.

#include <iostream>
using namespace std;

// Base class with a virtual function
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

// Derived class 2
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};

// Function to demonstrate exception handling
void divide(int a, int b) {
    try {
        if (b == 0)
            throw runtime_error("Division by zero error!");
        cout << "Result: " << a / b << endl;
    }
    catch (const runtime_error& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
}

int main() {
    cout << "Name : Shreya Vadukar" <<"\n"<<"Enrollment number : 24BT04175"<<endl;
    // Polymorphism demonstration
    Shape* shapePtr;
    Circle c;
    Square s;

    shapePtr = &c;
    shapePtr->draw(); // Calls Circle's draw()

    shapePtr = &s;
    shapePtr->draw(); // Calls Square's draw()

    // Exception handling demonstration
    cout << "\nException Handling Demo:" << endl;
    divide(10, 2); // Normal division
    divide(10, 0); // Will throw exception

    return 0;
}