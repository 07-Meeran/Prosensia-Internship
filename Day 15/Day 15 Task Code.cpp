#include <iostream>
using namespace std;

// Base Class
class Employee {
protected:
    string name;
    int id;
    float salary;

public:
    Employee(string n, int i, float s) : name(n), id(i), salary(s) {}

    // Virtual function for polymorphism
    virtual void display() {
        cout << "Name: " << name << "\nID: " << id << "\nSalary: " << salary << endl;
    }

    virtual ~Employee() {}
};

// Derived Class: Manager
class Manager : public Employee {
private:
    float bonus;

public:
    Manager(string n, int i, float s, float b) : Employee(n, i, s), bonus(b) {}

    void display() override {
        Employee::display();
        cout << "Bonus: " << bonus << endl;
    }
};

// Derived Class: Developer
class Developer : public Employee {
private:
    string language;

public:
    Developer(string n, int i, float s, string lang) : Employee(n, i, s), language(lang) {}

    void display() override {
        Employee::display();
        cout << "Programming Language: " << language << endl;
    }
};

// Main Function
int main() {
    // Using base class pointer
    Employee* empList[2];

    empList[0] = new Manager("Ali", 101, 75000, 15000);
    empList[1] = new Developer("Sara", 102, 60000, "C++");

    cout << "\n--- Employee Details ---\n";
    for (int i = 0; i < 2; i++) {
        empList[i]->display();
        cout << "-----------------------\n";
    }

    // Clean up
    for (int i = 0; i < 2; i++) {
        delete empList[i];
    }

    return 0;
}
