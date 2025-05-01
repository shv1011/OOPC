//Write a program to demonstrate different type of inheritances.

#include <iostream>
using namespace std;

// 1. Single Inheritance
class Animal {
public:
    void eat() {
        cout << "Animal eats." << endl;
    }
};

class Dog : public Animal { // Single inheritance
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

// 2. Multiple Inheritance
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B { // Multiple inheritance
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

// 3. Multilevel Inheritance
class Vehicle {
public:
    void start() {
        cout << "Vehicle starts." << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Car drives." << endl;
    }
};

class SportsCar : public Car {
public:
    void turbo() {
        cout << "SportsCar turbo mode!" << endl;
    }
};

// 4. Hierarchical Inheritance
class Shape {
public:
    void draw() {
        cout << "Drawing shape." << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of circle." << endl;
    }
};

class Square : public Shape {
public:
    void area() {
        cout << "Area of square." << endl;
    }
};

int main() {
    cout << "Name : Shreya Vadukar" <<"/n"<<"Enrollment number : 24BT04175"<<endl;
    cout << "Single Inheritance:" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\nMultiple Inheritance:" << endl;
    C objC;
    objC.showA();
    objC.showB();
    objC.showC();

    cout << "\nMultilevel Inheritance:" << endl;
    SportsCar sc;
    sc.start();
    sc.drive();
    sc.turbo();

    cout << "\nHierarchical Inheritance:" << endl;
    Circle cir;
    Square sq;
    cir.draw();
    cir.area();
    sq.draw();
    sq.area();

    // Hybrid Inheritance is a combination and can be constructed using above building blocks.

    return 0;
}