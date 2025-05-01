// Perform the following operations of file management : 
// Count characters and spaces
// Append to a file
// Copy contents and change cast
// Merge two files
// Count characters, words & lines
// Arrange records in ascending order.
// Add & read contents of file
// Create file to store employee details
// Display content of file

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

// Function to count characters and spaces
void countCharsAndSpaces(const string& filename) {
    ifstream file(filename);
    char ch;
    int charCount = 0, spaceCount = 0;
    while (file.get(ch)) {
        if (ch == ' ') spaceCount++;
        else charCount++;
    }
    cout << "Characters: " << charCount << ", Spaces: " << spaceCount << endl;
    file.close();
}

// Function to append to a file
void appendToFile(const string& filename) {
    ofstream file(filename, ios::app);
    string text;
    cout << "Enter text to append: ";
    cin.ignore();
    getline(cin, text);
    file << text << endl;
    file.close();
    cout << "Text appended.\n";
}

// Function to copy contents and change case
void copyAndChangeCase(const string& src, const string& dest) {
    ifstream fin(src);
    ofstream fout(dest);
    char ch;
    while (fin.get(ch)) {
        fout.put(isupper(ch) ? tolower(ch) : toupper(ch));
    }
    fin.close();
    fout.close();
    cout << "Contents copied to '" << dest << "' with changed case.\n";
}

// Function to merge two files
void mergeFiles(const string& file1, const string& file2, const string& merged) {
    ifstream f1(file1), f2(file2);
    ofstream fout(merged);
    string line;
    while (getline(f1, line)) fout << line << endl;
    while (getline(f2, line)) fout << line << endl;
    f1.close(); f2.close(); fout.close();
    cout << "Files merged into '" << merged << "'.\n";
}

// Function to count characters, words, and lines
void countCharsWordsLines(const string& filename) {
    ifstream file(filename);
    string line, word;
    int charCount = 0, wordCount = 0, lineCount = 0;
    while (getline(file, line)) {
        lineCount++;
        charCount += line.length();
        stringstream ss(line);
        while (ss >> word) wordCount++;
    }
    cout << "Characters: " << charCount << ", Words: " << wordCount << ", Lines: " << lineCount << endl;
    file.close();
}

// Function to arrange numbers in ascending order
void sortNumbersInFile(const string& filename) {
    ifstream fin(filename);
    vector<int> nums;
    int n;
    while (fin >> n) nums.push_back(n);
    fin.close();
    sort(nums.begin(), nums.end());
    ofstream fout("sorted.txt");
    for (int x : nums) fout << x << endl;
    fout.close();
    cout << "Numbers sorted and saved in 'sorted.txt'.\n";
}

// Function to add and read contents of a file
void addAndReadFile(const string& filename) {
    ofstream fout(filename);
    string text;
    cout << "Enter text to write to file: ";
    cin.ignore();
    getline(cin, text);
    fout << text << endl;
    fout.close();

    ifstream fin(filename);
    cout << "File contents:\n";
    while (getline(fin, text)) cout << text << endl;
    fin.close();
}

// Function to create file to store employee details
void createEmployeeFile(const string& filename) {
    ofstream fout(filename);
    int n, id, salary;
    string name;
    cout << "How many employees? ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Enter ID Name Salary: ";
        cin >> id >> name >> salary;
        fout << id << " " << name << " " << salary << endl;
    }
    fout.close();
    cout << "Employee details saved in '" << filename << "'.\n";
}

// Function to display content of file
void displayFile(const string& filename) {
    ifstream fin(filename);
    string line;
    cout << "File contents:\n";
    while (getline(fin, line)) cout << line << endl;
    fin.close();
}

int main() {
    cout << "Name : Shreya Vadukar" <<"/n"<<"Enrollment number : 24BT04175"<<endl;
    int choice;
    string file1, file2, file3;
    do {
        cout << "\n--- File Management Menu ---\n";
        cout << "1. Count characters and spaces\n";
        cout << "2. Append to a file\n";
        cout << "3. Copy contents and change case\n";
        cout << "4. Merge two files\n";
        cout << "5. Count characters, words & lines\n";
        cout << "6. Arrange numbers in ascending order\n";
        cout << "7. Add & read contents of file\n";
        cout << "8. Create file to store employee details\n";
        cout << "9. Display content of file\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter filename: ";
                cin >> file1;
                countCharsAndSpaces(file1);
                break;
            case 2:
                cout << "Enter filename: ";
                cin >> file1;
                appendToFile(file1);
                break;
            case 3:
                cout << "Enter source filename: ";
                cin >> file1;
                cout << "Enter destination filename: ";
                cin >> file2;
                copyAndChangeCase(file1, file2);
                break;
            case 4:
                cout << "Enter first filename: ";
                cin >> file1;
                cout << "Enter second filename: ";
                cin >> file2;
                cout << "Enter merged filename: ";
                cin >> file3;
                mergeFiles(file1, file2, file3);
                break;
            case 5:
                cout << "Enter filename: ";
                cin >> file1;
                countCharsWordsLines(file1);
                break;
            case 6:
                cout << "Enter filename containing numbers: ";
                cin >> file1;
                sortNumbersInFile(file1);
                break;
            case 7:
                cout << "Enter filename: ";
                cin >> file1;
                addAndReadFile(file1);
                break;
            case 8:
                cout << "Enter filename: ";
                cin >> file1;
                createEmployeeFile(file1);
                break;
            case 9:
                cout << "Enter filename: ";
                cin >> file1;
                displayFile(file1);
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);
    return 0;
}