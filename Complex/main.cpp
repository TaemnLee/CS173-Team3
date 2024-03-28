#include <iostream>
#include "Complex.h" // Include the header file with Complex class definition
#include <cassert>   // For assert function

using namespace std;

int main() {
    // Test default constructor
    Complex c1;
    assert(c1.getReal() == 0 && c1.getImag() == 0);

    // Test constructor with real and imaginary parts
    Complex c2(3, 4);
    assert(c2.getReal() == 3 && c2.getImag() == 4);

    // Test copy constructor
    Complex c3(c2);
    assert(c3.getReal() == 3 && c3.getImag() == 4);

    // Test setReal and setImag functions
    c1.setReal(2);
    c1.setImag(3);
    assert(c1.getReal() == 2 && c1.getImag() == 3);

    // Test equality and inequality operators
    assert(c2 == c3);
    assert(c1 != c2);

    // Test assignment operator
    Complex c4;
    c4 = c2;
    assert(c4 == c2);

    // Test addition operator with Complex
    Complex c5 = c1 + c2;
    assert(c5.getReal() == 5 && c5.getImag() == 7);

    // Test addition operator with float
    Complex c6 = c2 + 2.5;
    assert(c6.getReal() == 5.5 && c6.getImag() == 4);

    // Test addition operator with int
    Complex c7 = c2 + 2;
    assert(c7.getReal() == 5 && c7.getImag() == 4);

    // Test subtraction operator with float
    Complex c8 = c2 - 2.5;
    assert(c8.getReal() == 0.5 && c8.getImag() == 4);

    // Test subtraction operator with Complex
    Complex c9 = c2 - c1;
    assert(c9.getReal() == 1 && c9.getImag() == 4);

    // Test subtraction operator with int
    Complex c10 = c2 - 2;
    assert(c10.getReal() == 1 && c10.getImag() == 4);

    // Test multiplication operator with int
    Complex c11 = c2 * 2;
    assert(c11.getReal() == 6 && c11.getImag() == 8);

    // Test multiplication operator with Complex
    Complex c12 = c2 * c1;
    assert(c12.getReal() == 6 && c12.getImag() == 8);

    // Test multiplication operator with float
    Complex c13 = c2 * 1.5;
    assert(c13.getReal() == 4.5 && c13.getImag() == 6);

    // Test division operator with int
    Complex c14 = c2 / 2;
    assert(c14.getReal() == 1.5 && c14.getImag() == 2);

    // Test division operator with float
    Complex c15 = c2 / 1.5;
    assert(c15.getReal() == 2 && c15.getImag() == 2.66667); // Rounded to 5 decimal places

    // Test division operator with Complex
    Complex c16 = c2 / c1;
    assert(c16.getReal() == 2 && c16.getImag() == 0);

    // Test power operator
    Complex c17 = c2 ^ 2;
    assert(c17.getReal() == -7 && c17.getImag() == 24);

    // Test input/output operators
    cout << "Enter a complex number in the format (a + bi): ";
    Complex c18;
    cin >> c18;
    cout << "You entered: " << c18 << endl;

    // Test conjugate function
    Complex c19 = ~c2;
    assert(c19.getReal() == 3 && c19.getImag() == -4);

    // Test negation function
    Complex c20 = -c2;
    assert(c20.getReal() == -3 && c20.getImag() == -4);

    // Test absolute value function
    double absVal = c2.abs();
    assert(absVal == 5); // Magnitude of c2 is sqrt(3^2 + 4^2) = 5

    cout << "All tests passed successfully!" << endl;

    return 0;
}
