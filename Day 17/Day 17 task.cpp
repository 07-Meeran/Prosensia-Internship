#include <iostream>
using namespace std;

class Vehicle {
private:
    string company;
    string model;
    int year;
    static int count; // static variable to count vehicles

public:
    // Default constructor
    Vehicle() {
        company = "Unknown";
        model = "Unknown";
        year = 0;
        count++;
        cout << "Default constructor called.\n";
    }

    // Parameterized constructor
    Vehicle(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
        count++;
        cout << "Parameterized constructor called.\n";
    }

    // Display function
    void displayInfo() const {
        cout << "Company: " << company << ", Model: " << model << ", Year: " << year << endl;
    }

    // Static function to show count
    static void showCount() {
        cout << "Total Vehicles: " << count << endl;
    }

    // Destructor
    ~Vehicle() {
        cout << "Destructor called for " << company << " " << model << endl;
        count--;
    }
};

// Initialize static variable
int Vehicle::count = 0;

int main() {
    cout << "Creating vehicles...\n";
    Vehicle::showCount();

    Vehicle v1;
    Vehicle v2("Toyota", "Corolla", 2020);
    Vehicle v3("Honda", "Civic", 2022);

    cout << "\nVehicle Information:\n";
    v1.displayInfo();
    v2.displayInfo();
    v3.displayInfo();

    Vehicle::showCount();

    cout << "\nExiting main...\n";
    return 0;
}