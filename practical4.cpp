//Write a different program to demonstrate control statements available in C++.

#include <iostream>
using namespace std;

int main() {
    cout << "Name : Shreya Vadukar" <<"/n"<<"Enrollment number : 24BT04175"<<endl;
    cout<<"/n /n"<<endl;

    cout<<"If statement" << endl;
    int age = 18;
    if (age == 18) {
        cout << "Helloo!" << endl;
    }
    
    cout << "If-else statement" << endl;
    int num = 10;
    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    cout<<"if-else if-else ladder statement"<< endl;
    int GuessNum;
    int Num = 67;
    cout << "Guess a number: ";
    if (Num >= 67) {
        cout << "The number is less than the guessed one. " << endl;
    } else if (Num == 67) {
        cout << "The number is equal to the guessed one." << endl;
    } else {
        cout << "The number is greater than the guessed one." << endl;
    }
    

    cout<< "Switch statement" << endl;
    char grade = 'B';
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        case 'C':
            cout << "Average!" << endl;
            break;
        default:
            cout << "Invalid grade!" << endl;
    }


    return 0;
}