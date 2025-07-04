#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Student {
    int id;
    char name[50];
    float marks;
    char grade;
};

// Compute grade based on marks
char computeGrade(float marks) {
    if (marks >= 85) return 'A';
    else if (marks >= 70) return 'B';
    else if (marks >= 50) return 'C';
    else return 'F';
}

// Function to add a student to file
void addStudentToFile(const Student& s, const char* filename) {
    if (s.marks < 0 || s.marks > 100) {
        cout << "Marks must be between 0 and 100." << endl;
        return;
    }

    ofstream file(filename, ios::app);
    if (!file) {
        cout << "Failed to open file for writing." << endl;
        return;
    }

    Student temp = s;
    temp.grade = computeGrade(temp.marks);

    file << temp.id << "|" << temp.name << "|" << temp.marks << "|" << temp.grade << endl;
    file.close();

    cout << "Student added successfully." << endl;
}

// Function to display all student records from file
void displayStudentsFromFile(const char* filename) {
    ifstream file(filename);
    if (!file) {
        cout << "File not found." << endl;
        return;
    }

    char line[100];
    cout << "\nID\t| Name\t\t| Marks\t| Grade" << endl;
    cout << "----------------------------------------" << endl;

    while (file.getline(line, sizeof(line))) {
        char* token = strtok(line, "|");
        int column = 0;

        while (token != NULL) {
            if (column == 0) cout << token << "\t| ";
            else if (column == 1) cout << token << "\t\t| ";
            else if (column == 2) cout << token << "\t| ";
            else if (column == 3) cout << token;
            token = strtok(NULL, "|");
            column++;
        }
        cout << endl;
    }

    file.close();
}

// Function to search student by ID
void searchStudentByID(const char* filename, int searchID) {
    ifstream file(filename);
    if (!file) {
        cout << "File not found." << endl;
        return;
    }

    char line[100];
    bool found = false;

    while (file.getline(line, sizeof(line))) {
        char temp[100];
        strcpy(temp, line); // Backup line

        char* token = strtok(line, "|");
        int id = atoi(token);

        if (id == searchID) {
            char* name = strtok(NULL, "|");
            char* marks = strtok(NULL, "|");
            char* grade = strtok(NULL, "|");

            cout << "\nStudent Found:\n";
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
            cout << "Grade: " << grade << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found." << endl;
    }

    file.close();
}

// Menu-driven interface
int main() {
    const char* filename = "students.txt";
    int choice;

    do {
        cout << "\n--- Student Manager Menu ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            cout << "Enter ID: ";
            cin >> s.id;
            cout << "Enter Name: ";
            cin.ignore();
            cin.getline(s.name, 50);
            cout << "Enter Marks: ";
            cin >> s.marks;

            addStudentToFile(s, filename);
        } else if (choice == 2) {
            displayStudentsFromFile(filename);
        } else if (choice == 3) {
            int searchID;
            cout << "Enter Student ID to search: ";
            cin >> searchID;
            searchStudentByID(filename, searchID);
        }

    } while (choice != 0);

    return 0;
}