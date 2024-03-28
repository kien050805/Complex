#include "Complex.h"
#include <iostream>
#include <cmath>

using namespace std;

//=======================================================================
// Default Contructor
// Kien Le T.
//=======================================================================
Complex::Complex(void)
{
    a = 0;
    b = 0;
};

//=======================================================================
// Copy Contructor
// Nate Hydukovich
//=======================================================================
Complex::Complex (const Complex &c) {
    a = c.a;
    b = c.b;
}


Complex::Complex(double x, double y)
{
    a = x;
    b = y;
};

Complex::~Complex()
{};

//=======================================================================
// setReal Mutator
// Set real part of the complex number
// Kien Le T.
//=======================================================================
void Complex::setReal(double r)
{
    a = r;
};

//=======================================================================
// getReal Accessor
// Accesses real part of the complex number
// Nate Hydukovich
//=======================================================================
double Complex::getReal() const {
    return a;
}

//=======================================================================
// Operator Equal Too (==)
// Returns distance of complex from the origin
// Nate Hydukovich
//=======================================================================
bool Complex::operator== (const Complex &c) const {
    return (a == c.a && b == c.b);
}

//=======================================================================
// Operator Add (+), with float
// Nate Hydukovich
//=======================================================================
Complex Complex::operator+ (double f) const {
    Complex retValue;
    retValue.a = a + f;
    retValue.b = b;
    return retValue;
}

//=======================================================================
// Operator Multiply (*), with complex
// Nate Hydukovich
//=======================================================================
Complex Complex::operator* (const Complex &c) const {
    Complex retValue;
    retValue.a = a * c.a;
    retValue.b = b * c.b;
    return retValue;}

//=======================================================================
// Operator Subtract (-), with complex
// Nate Hydukovich
//=======================================================================
Complex Complex::operator- (const Complex &c) const {
    Complex retValue;
    retValue.a = a - c.a;
    retValue.b = b - c.b;
    return retValue;
}

//=======================================================================
// Absolute Value
// Returns distance of complex from the origin
// Nate Hydukovich
//=======================================================================
double Complex::abs (void) const {
    return(sqrt(a * a + b * b));
}










ostream & operator<< ( ostream & os, const Complex &c )
{
    ostream & << c.a << c.b;
    return ;
};
istream & operator>> ( istream & is, Complex &c )
{

};



//=======================================================================
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
//=======================================================================


// Constructor with parameters (a, b)
// Sets the real and imaginary parts of the complex number
// Bri Gonzalez
Complex::Complex(double x, double y) : a(x), b(y) {}

// Setter for the imaginary part
// Sets the imaginary part of the complex number
// Bri Gonzalez
void Complex::setImag(double r) {
    b = r;
}

// Inequality operator (!=)
// Checks if two complex numbers are not equal
// Bri Gonzalez
bool Complex::operator!=(const Complex &c) const {
    return (a != c.a || b != c.b);
}

// Addition operator with int (+)
// Adds an integer to the complex number
// Bri Gonzalez
Complex Complex::operator+(int i) const {
    return Complex(a + i, b);
}

// Subtraction operator with int (-)
// Subtracts an integer from the complex number
// Bri Gonzalez
Complex Complex::operator-(int i) const {
    return Complex(a - i, b);
}

// Multiplication operator with float (*)
// Multiplies the complex number by a floating point number
// Bri Gonzalez
Complex Complex::operator*(float f) const {
    return Complex(a * f, b * f);
}




