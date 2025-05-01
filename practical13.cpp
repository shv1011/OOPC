//What do an array of objects require? Demonstrate an array of objects with proper examples.

#include <iostream>
using namespace std;

class Book {
    string title;
    string author;
    int year;
public:
    void setData(string t, string a, int y) {
        title = t;
        author = a;
        year = y;
    }
    void display() {
        cout << "Title: " << title
             << ", Author: " << author
             << ", Year: " << year << endl;
    }
};

int main() {
    Book library[3];

    library[0].setData("The Alchemist", "Paulo Coelho", 1988);
    library[1].setData("1984", "George Orwell", 1949);
    library[2].setData("To Kill a Mockingbird", "Harper Lee", 1960);

    for (int i = 0; i < 3; i++) {
        library[i].display();
    }

    return 0;
}
