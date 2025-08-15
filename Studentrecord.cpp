#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Student Structure
struct Student {
    string name;
    int roll;
    float cgpa;
};

int main() {
    Student s;
    ofstream file("students.txt", ios::app); // File open in append mode

    // Taking input from user
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll: ";
    cin >> s.roll;
    cout << "Enter CGPA: ";
    cin >> s.cgpa;

    // Writing data to file
    file << s.name << " " << s.roll << " " << s.cgpa << endl;
    file.close(); // Closing file

    cout << "Student saved successfully!" << endl;
    return 0;
}
