//What do you understand about  the inline functions? How can you create an inline function?

#include <iostream>
using namespace std;

// Inline function definition
inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 5, y = 10;
    cout << "Max of " << x << " and " << y << " is: " << max(x, y) << endl;
    cout << "Max of 20 and 15 is: " << max(20, 15) << endl;
    return 0;
}
