#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
    virtual ~Shape() {}
};

// Derived class - Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class - Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle." << endl;
    }
};

// Derived class - Triangle
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Triangle." << endl;
    }
};

int main() {
    // Array of base class pointers
    Shape* shapes[3];

    // Dynamically allocate derived objects
    shapes[0] = new Circle();
    shapes[1] = new Rectangle();
    shapes[2] = new Triangle();

    // Polymorphic draw calls
    cout << "\n--- Shape Drawing ---\n";
    for (int i = 0; i < 3; i++) {
        shapes[i]->draw();
    }

    // Free memory
    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}
