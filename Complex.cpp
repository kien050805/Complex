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

//=======================================================================
// operator/
// Divide complex number by an integer
// Andrew Nguyen
//=======================================================================
Complex	    Complex::operator/	( double f ) const
{
	Complex ret;

	ret.a = a/f;
    ret.b = b/f;

	return ret;
}

//=======================================================================
// operator/
// Divide complex number by another complex number
// Andrew Nguyen
//=======================================================================
Complex	    Complex::operator/	( int i ) const
{
	Complex ret;

	ret.a = a/i;
    ret.b = b/i;

	return ret;
}

//=======================================================================
// operator^
// Raise complex number by given exponent
// Andrew Nguyen
//=======================================================================
Complex	    Complex::operator^	( int p ) const
{
	Complex ret = *this;

    if (p > 0) {
        for (int i =0; i < p; i++)
	        ret = ret * *this;
    }
    else if (p < 0) {
        for (int i =0; i < -1*p; i++)
	        ret = ret / (*this);    
    }
    else if (p == 0)
        return Complex(1,0);

    return ret;
}

//=======================================================================
// operator~
// Return the conjugate of complex number.
// Andrew Nguyen
//=======================================================================
Complex	    Complex::operator~	( void ) const
{
	Complex ret;
    ret.a = a;
    ret.b = -b;

    return ret;
}

//=======================================================================
// operator-
// Return the negation of complex number.
// Andrew Nguyen
//=======================================================================
Complex	    Complex::operator-	( void ) const
{
    Complex ret;
    ret.a = -a;
    ret.b = -b;

    return ret;
}

//=======================================================================
// cout << operator overload
// Output the complex number.
// Andrew Nguyen
//=======================================================================
ostream & operator<< ( ostream & os, const Complex &c )
{
    if (c.b == 0 && c.a != 0)
        os << c.a;
    else if (c.a == 0 && c.b != 0)
        os << c.b << "i";
    else if (c.a == 0 && c.b == 0)
        os << "0";
    else if (c.b < 0)
        os << c.a << c.b << "i";
    else
        os << c.a << "+" << c.b << "i";

    return os;
};

//=======================================================================
// cin >> operator overload
// Take the complex number as input.
// Andrew Nguyen
//=======================================================================
istream & operator>> ( istream & is, Complex &c )
{
    string s, real, imag;
    is >> s;

    size_t iPos = s.find('i');
    size_t pos = s.find_last_of("+-");
    
    if (iPos != string::npos) {
        if (iPos != 0) {
            if (pos != string::npos) {
                real = s.substr(0, pos);
                imag = s.substr(pos, s.size()-pos-1);
    
                if (real.empty()) 
                    real = '0';
                
                if (imag == "+")
                    imag = '1';
                else if (imag == "-")
                    imag = "-1";
            }
            else {
                real = '0';
                imag = s.substr(0, iPos);
            }
        }
        else {
            real = '0';
            imag = '1';
        }
    }
    else {
        real = s;
        imag = '0';
    }
    c.a = stof(real);
    c.b = stof(imag);
     
    return is;
}


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




