// Write a program to demonstrate concepts and different types of constructor.

#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
public:
    // 1. Default Constructor
    Student() {
        name = "Shreya";
        age = 19;
        cout << "Default constructor called." << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called." << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy constructor called." << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    cout << "Name : Shreya Vadukar" <<"/n"<<"Enrollment number : 24BT04175"<<endl;
    // Default constructor
    Student s1;
    s1.display();

    // Parameterized constructor
    Student s2("Alice", 20);
    s2.display();

    // Copy constructor
    Student s3 = s2;
    s3.display();

    return 0;
}