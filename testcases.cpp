//=======================================================================
// @file test.cpp
// @author Kien Le T. , Nate Hydukovich, Andrew Nguyen, Bri Gonzalez
// @brief Complex ADT testing program
// 2024-03-28
//=======================================================================
#include <iostream>
#include "Complex.h"
using namespace std;


void testComplex() {
    // Test default constructor
    Complex c1;
    cout << "Default Constructor: " << c1 << endl;

    // Test constructor with real part
    Complex c2(5);
    cout << "Constructor with real part: " << c2 << endl;

    // Test constructor with real and imaginary parts
    Complex c3(3, 4);
    cout << "Constructor with real and imaginary parts: " << c3 << endl;

    // Test copy constructor
    Complex c4(c3);
    cout << "Copy Constructor: " << c4 << endl;

    // Test setter and getter for real part
    c1.setReal(2);
    cout << "Setter and Getter for real part: " << c1.getReal() << endl;

    // Test setter and getter for imaginary part
    c1.setImag(3);
    cout << "Setter and Getter for imaginary part: " << c1.getImag() << endl;

    // Test addition with another complex number
    Complex sum = c2 + c3;
    cout << "Addition with another complex number: " << sum << endl;

    // Test addition with a double
    sum = c2 + 2.5;
    cout << "Addition with a double: " << sum << endl;

    // Test addition with an int
    sum = c2 + 2;
    cout << "Addition with an int: " << sum << endl;

    // Test subtraction with another complex number
    Complex diff = c2 - c3;
    cout << "Subtraction with another complex number: " << diff << endl;

    // Test subtraction with a double
    diff = c2 - 2.5;
    cout << "Subtraction with a double: " << diff << endl;

    // Test subtraction with an int
    diff = c2 - 2;
    cout << "Subtraction with an int: " << diff << endl;

    // Test multiplication with another complex number
    Complex prod = c2 * c3;
    cout << "Multiplication with another complex number: " << prod << endl;

    // Test multiplication with a double
    prod = c2 * 2.5;
    cout << "Multiplication with a double: " << prod << endl;

    // Test multiplication with an int
    prod = c2 * 2;
    cout << "Multiplication with an int: " << prod << endl;

    // Test division by another complex number
    Complex div = c3 / c2;
    cout << "Division by another complex number: " << div << endl;

    // Test division by a double
    div = c2 / 2.5;
    cout << "Division by a double: " << div << endl;

    // Test division by an int
    div = c2 / 2;
    cout << "Division by an int: " << div << endl;

    // Test absolute value
    double absolute = c3.abs();
    cout << "Absolute value: " << absolute << endl;

    // Negation
    Complex neg = -c3;
    cout << "Negation: " << neg << endl;

    // Test power operator
    Complex power = c3 ^ 2;
    cout << "Power: " << power << endl;

    // Test equality operator
    bool isEqual = (c2 == c3);
    cout << "Equality operator: " << (isEqual ? "True" : "False") << endl;

    // Test inequality operator
    bool isNotEqual = (c2 != c3);
    cout << "Inequality operator: " << (isNotEqual ? "True" : "False") << endl;
}

int main() {
    testComplex();
    return 0;
}
