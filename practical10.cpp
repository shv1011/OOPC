//Write a program to demonstrate class and object creation. Define a member function inside the class and outside the class. 

#include<iostream>
using namespace std;
class Car{
public:
    int year;
    int topspeed;
    string brand;
    string colour;
void setinfo(){
    cout<<"enter year:"<<endl;
    cin>>year;
    cout<<"enter topspeed:"<<endl;
    cin>>topspeed;
    cout<<"enter brand:"<<endl;
    cin>>brand;
    cout<<"enter colour:"<<endl;
    cin>>colour;
}
void getdata(){
    cout<<year<<endl;
    cout<<topspeed<<endl;
    cout<<brand<<endl;
    cout<<colour<<endl;
}
};
int main()
{
    cout << "Name : Shreya Vadukar" <<"\n"<<"Enrollment number : 24BT04175"<<endl;
    Car C1;
    // C1.year=2025;
    // C1.topspeed=5000;
    // C1.brand="Hyundai";
    // C1.colour="Blue";
    C1.setinfo();
    C1.getdata();
    return 0;
}