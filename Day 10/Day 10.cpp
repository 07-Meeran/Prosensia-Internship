#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

// Check if ID already exists
bool isDuplicateID(int id, const char* filename) {
    ifstream file(filename);
    if (!file) return false;

    char line[100];
    while (file.getline(line, 100)) {
        int existingID = atoi(strtok(line, "|"));
        if (existingID == id) return true;
    }
    return false;
}

// Add new item to file
void addItem(const char* filename) {
    Item item;
    cout << "Enter Item ID: ";
    cin >> item.id;

    if (isDuplicateID(item.id, filename)) {
        cout << "Duplicate ID. Item not added.\n";
        return;
    }

    cout << "Enter Name: ";
    cin.ignore();
    cin.getline(item.name, 50);
    cout << "Enter Quantity: ";
    cin >> item.quantity;
    cout << "Enter Price: ";
    cin >> item.price;

    ofstream file(filename, ios::app);
    file << item.id << "|" << item.name << "|" << item.quantity << "|" << item.price << endl;
    file.close();

    cout << "Item added.\n";
}

// Display all items
void viewItems(const char* filename) {
    ifstream file(filename);
    if (!file) {
        cout << "File not found.\n";
        return;
    }

    char line[100];
    cout << "\nID\tName\t\tQty\tPrice\n";
    cout << "----------------------------------------\n";

    while (file.getline(line, 100)) {
        char* id = strtok(line, "|");
        char* name = strtok(NULL, "|");
        char* qty = strtok(NULL, "|");
        char* price = strtok(NULL, "|");

        cout << id << "\t" << name << "\t\t" << qty << "\t" << price << endl;
    }

    file.close();
}

// Search item by ID
void searchItem(const char* filename, int searchID) {
    ifstream file(filename);
    char line[100];
    bool found = false;

    while (file.getline(line, 100)) {
        char temp[100];
        strcpy(temp, line);
        int id = atoi(strtok(temp, "|"));

        if (id == searchID) {
            char* name = strtok(NULL, "|");
            char* qty = strtok(NULL, "|");
            char* price = strtok(NULL, "|");

            cout << "\nItem Found:\n";
            cout << "ID: " << id << "\nName: " << name << "\nQuantity: " << qty << "\nPrice: " << price << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Item not found.\n";
    }

    file.close();
}

// Menu
int main() {
    const char* filename = "inventory.txt";
    int choice;

    do {
        cout << "\n--- Inventory Menu ---\n";
        cout << "1. Add Item\n";
        cout << "2. View All Items\n";
        cout << "3. Search by ID\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) addItem(filename);
        else if (choice == 2) viewItems(filename);
        else if (choice == 3) {
            int id;
            cout << "Enter ID to search: ";
            cin >> id;
            searchItem(filename, id);
        }
    } while (choice != 0);

    return 0;
}
	