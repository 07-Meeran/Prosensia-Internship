#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    float cgpa;

    // Input
    cout << "Enter your name: ";
    cin >> name;  // Takes only single-word name

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your CGPA: ";
    cin >> cgpa;

    // Nested conditionals for checking eligibility
    if (age >= 18) {
        if (cgpa >= 2.5) {
            cout << "Hello " << name << ", you are eligible to apply!" << endl;
        } else {
            cout << "Sorry " << name << ", your CGPA is below 2.5. Not eligible." << endl;
        }
    } else {
        cout << "Sorry " << name << ", you must be at least 18 years old to apply." << endl;
    }

    return 0;
}
