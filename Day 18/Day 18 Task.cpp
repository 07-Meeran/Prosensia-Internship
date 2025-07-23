#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overload - operator
    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }

    // Overload * operator
    Complex operator*(const Complex& c) {
        float r = (real * c.real) - (imag * c.imag);
        float i = (real * c.imag) + (imag * c.real);
        return Complex(r, i);
    }

    // Overload == operator
    bool operator==(const Complex& c) {
        return (real == c.real && imag == c.imag);
    }

    // Overload > operator for magnitude comparison
    bool operator>(const Complex& c) {
        return (magnitude() > c.magnitude());
    }

    // Magnitude function
    float magnitude() const {
        return sqrt(real * real + imag * imag);
    }

    // Overload << for output
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real;
        if (c.imag >= 0)
            out << " + " << c.imag << "i";
        else
            out << " - " << -c.imag << "i";
        return out;
    }

    // Overload >> for input
    friend istream& operator>>(istream& in, Complex& c) {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in;
    }
};

int main() {
    Complex a, b;

    cout << "--- Input First Complex Number ---\n";
    cin >> a;

    cout << "\n--- Input Second Complex Number ---\n";
    cin >> b;

    Complex sum = a + b;
    Complex diff = a - b;
    Complex prod = a * b;

    cout << "\n🔹 Results:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a + b = " << sum << endl;
    cout << "a - b = " << diff << endl;
    cout << "a * b = " << prod << endl;

    if (a == b)
        cout << " a and b are equal.\n";
    else
        cout << " a and b are not equal.\n";

    if (a > b)
        cout << "a has greater magnitude than b.\n";
    else
        cout << "b has greater (or equal) magnitude than a.\n";

    return 0;
}