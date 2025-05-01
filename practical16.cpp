// Write a program to demonstrate friend function.

#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    // Declare friend function
    friend void displayVolume(Box b);
};

// Friend function definition
void displayVolume(Box b) {
    int volume = b.length * b.width * b.height;
    cout << "Volume of the box: " << volume << endl;
}

int main() {
    cout << "Name : Shreya Vadukar" <<"/n"<<"Enrollment number : 24BT04175"<<endl;
    Box box1(3, 4, 5);
    displayVolume(box1); // Friend function can access private members
    return 0;
}