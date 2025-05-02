// C++ program to demonstrate constructor overloading

#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    // Default constructor
    Rectangle() {
        length = 1;
        width = 1;
    }

    // Constructor with one parameter (square)
    Rectangle(int side) {
        length = side;
        width = side;
    }

    // Constructor with two parameters (rectangle)
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void displayArea() {
        cout << "Area: " << length * width << endl;
    }
};

int main() {
    cout << "Name : Shreya Vadukar" <<"\n"<<"Enrollment number : 24BT04175"<<endl;
    Rectangle rect1;         // Default constructor
    Rectangle rect2(5);      // Constructor with one parameter
    Rectangle rect3(5, 3);   // Constructor with two parameters

    rect1.displayArea();     // Output: Area: 1
    rect2.displayArea();     // Output: Area: 25
    rect3.displayArea();     // Output: Area: 15

    return 0;
}