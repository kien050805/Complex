#include "Complex.h"
#include <iostream>
#include <cmath>


using namespace std;

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
