//Write a different program to demonstrate loops available in C++.

#include <iostream>
using namespace std;
int main() {
    cout << "Name : Shreya Vadukar" <<"/n"<<"Enrollment number : 24BT04175"<<endl;
    cout<<"/n /n"<<endl;
    
    cout<< "For loop" << endl;
    cout << "Counting from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout<< "While loop" << endl;
    cout << "Counting from 1 to 5:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    cout<< "Do-while loop" << endl;
    cout << "Counting from 1 to 5:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl;

    cout<< "Nested loop" << endl;
    cout << "Multiplication table of 2:" << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}