#include <iostream>
using namespace std;
int main() {
    float mathematics;
    float english;
    float physics;
    double total;
    double average;
//take details of subject marks
    cout<<"*****************************************************************\n";
    cout << "*Enter your marks in given subjects (Each subject has 100 marks)*\n";
    cout<<"*****************************************************************\n";
    cout << "Enter obtained marks in Mathematics:\n";
    cin >> mathematics;

    cout << "Enter obtained marks in English:\n";
    cin >> english;

    cout << "Enter obtained marks in Physics:\n";
    cin >> physics;
//calculate total and average
    total = mathematics + english + physics;
    average = total / 3.0;

    cout << "\nTotal Marks = " << total << "/300" << endl;
    cout << "Average = " << average << "%" << endl;
//calculate grade
    if (average >= 80 && average <= 100) {
        cout << "Grade: A" << endl;
    } else if (average >= 70 && average < 80) {
        cout << "Grade: B" << endl;
    } else if (average >= 60 && average < 70) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: Fail" << endl;
    }

    return 0;
}
