#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to return maximum of three integers
int maxOfThree(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    int num, a, b, c;

    // Factorial
    cout << "Enter a number to find factorial: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << num << " is " << factorial(num) << endl;

    // Max of three
    cout << "\nEnter three integers to find the maximum:\n";
    cin >> a >> b >> c;

    cout << "The maximum number is: " << maxOfThree(a, b, c) << endl;

    return 0;
}
