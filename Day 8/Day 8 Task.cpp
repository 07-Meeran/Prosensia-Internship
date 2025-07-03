#include <iostream>
using namespace std;

// Helper: Check if number is odd
bool isOdd(int n) {
	return n % 2 != 0;
}

// 1. Conditional swap if absolute difference > 10
void conditionalSwap(int* x, int* y) {
	int diff = (*x > *y) ? (*x - *y) : (*y - *x);
	if (diff > 10) {
		int* temp = new int;
		*temp = *x;
		*x = *y;
		*y = *temp;
		delete temp;
		cout <<"Swapped because difference > 10.\n";
	} else {
		cout <<"No swap (difference <= 10).\n";
	}
}

// 2. Print array using pointer arithmetic
void printArrayViaPointer(int* arr, int size) {
	cout << "\nArray Values and Memory Addresses:\n";
	for (int i = 0; i < size; i++) {
		cout << "Value: " << *(arr + i) << "\tAddress: " << (arr + i) << endl;
	}
}

// 3. Find first even element
int* findFirstEven(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if (*(arr + i) % 2 == 0)
			return (arr + i);
	}
	return nullptr;
}

// 4. Increment all odd values by 1 using address
void incrementOddsByAddress(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if (isOdd(*(arr + i))) {
			*(arr + i) += 1;
		}
	}
}

// (Optional) Count numbers greater than value at given pointer
int countGreaterThan(int* arr, int size, int* refPtr) {
	if (refPtr == nullptr) return 0;

	int count = 0;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) > *refPtr) count++;
	}
	return count;
}

// --- Main Program ---
int main() {
	int a, b;
	int arr[5];

	// Input two integers
	cout << "Enter two integers (a and b): ";
	cin >> a >> b;

	// Conditional swap
	cout << "\nChecking Conditional Swap:\n";
	conditionalSwap(&a, &b);
	cout << "a = " << a << ", b = " << b << endl;

	// Input array
	cout << "\nEnter 5 integers for the array(0-9):\n";
	for (int i = 0; i < 5; i++) {
		cout << "Element " << i + 1 << ": ";
		cin >> *(arr + i);  // Pointer-style input
	}

	// Print array with addresses
	printArrayViaPointer(arr, 5);

	// Increment odds
	incrementOddsByAddress(arr, 5);
	cout << "\nArray after incrementing odd values by 1:\n";
	printArrayViaPointer(arr, 5);

	// First even element
	int* firstEven = findFirstEven(arr, 5);
	if (firstEven != nullptr) {
		cout << "\nFirst even element: " << *firstEven << " at address " << firstEven << endl;
	} else {
		cout << "\nNo even element found.\n";
	}

	// Bonus: Count numbers > value at pointer
	int greaterCount = countGreaterThan(arr, 5, &a);
	cout << "\nNumbers greater than a (" << a << "): " << greaterCount << endl;

	return 0;
}
