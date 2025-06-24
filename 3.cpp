#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    float gpa;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your GPA: ";
    cin >> gpa;
    
    cout << "\nYour Information:\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    return 0;
}