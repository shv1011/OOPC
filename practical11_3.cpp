

// FOR PRIVATE →
#include<iostream>
using namespace std;
class Pre {
private:
    int a;
public:
    void geta() {
        cout<<"enter a=";
        cin>>a;
        puta();
}
//private:
void puta() {
    cout<<"a="<<a;
}
};
int main(){
    Pre P1;
    P1.geta();
    P1.puta();
    return 0;
}