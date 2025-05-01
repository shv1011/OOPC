// Combined call by value and reference.

#include <iostream>
using namespace std;
void ref(int &x,int &y)
{
    x=4,y=5;
    cout<<"address of x: "<<&x<<",";
    cout<<"address of y: "<<&y<<endl;
}
void value(int x, int y)
{
    x=7,y=6;
    cout<<"address of x: "<<&x<<",";
    cout<<"address of y: "<<&y<<endl;
}
int main()
{
    int a=3,b=4;
    cout<<"add of a: "<<&a<<","<<"add of b: "<<&b<<endl;
    ref(a,b);
    value(a,b);
    return 0;
}