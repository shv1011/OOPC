//

#include <iostream>
using namespace std;

class Counter {
private:
    int value;
public:
    static int objectCount; // Static data member

    Counter(int v = 0) : value(v) {
        objectCount++;
        cout << "Constructor called. Current objectCount: " << objectCount << endl;
    }

    Counter(const Counter &obj) {
        value = obj.value;
        objectCount++;
        cout << "Copy constructor called. Current objectCount: " << objectCount << endl;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }

    // Static member function
    static int getObjectCount() {
        return objectCount;
    }
};

// Initialize static member
int Counter::objectCount = 0;

int main() {
    Counter c1(10);
    Counter c2 = c1;
    c1.display();
    c2.display();
    cout << "Total objects created: " << Counter::getObjectCount() << endl;
    Counter c3(20);
    cout << "Total objects created after c3: " << Counter::getObjectCount() << endl;
    return 0;
}