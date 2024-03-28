//=======================================================================
// @file Complex.cpp
// @author Kien Le T. , Nate Hydukovich, Andrew Nguyen, Bri Gonzalez
// @brief Complex ADT
// 2024-03-28
//=======================================================================
#include "Complex.h"
#include <iostream>
#include <cmath>

using namespace std;

//=======================================================================
// @brief Construct a new Complex:: Complex object;
// @author Kien Le T.
//=======================================================================
Complex::Complex(void)
{
    a = 0;
    b = 0;
};

//=======================================================================
// @brief Construct a new Complex:: Complex object;
// @author Nate Hydukovich
// @param c: Complex;
//=======================================================================
Complex::Complex(const Complex &c)
{
    a = c.a;
    b = c.b;
};

//=======================================================================
// @brief Construct a new Complex:: Complex object;
// @author Bri Gonzalez
// @param x: double: real value;
// @param y: double: imaginary value;
//=======================================================================
Complex::Complex(double x, double y)
{
    a = x;
    b = y;
};

//=======================================================================
// @brief Destroy the Complex:: Complex object;
//=======================================================================
Complex::~Complex(){};

//=======================================================================
// @brief Mutator: set real part;
// @author Kien Le T.
// @param r: double;
//=======================================================================
void Complex::setReal(double r)
{
    a = r;
};

//=======================================================================
// @brief Accessor: get real part;
// @author Nate Hydukovich
// @return double
//=======================================================================
double Complex::getReal(void) const
{
    return a;
};

//=======================================================================
// @brief Mutator: set imaginary part;
// @author Bri Gonzalez
// @param r: double;
//=======================================================================
void Complex::setImag(double r)
{
    b = r;
};

//=======================================================================
// @brief Accessor: get imaginary part;
// @author Kien Le T.
// @return double
//=======================================================================
double Complex::getImag(void) const
{
    return b;
};

//=======================================================================
// @brief Operator assign;
// @author Kien Le T.
// @param c: Complex;
// @return Complex
//=======================================================================
Complex Complex::operator=(const Complex &c)
{
    a = c.a;
    b = c.b;
    return *this;
};

//=======================================================================
// @brief Operator add;
// @author Kien Le T.
// @param c: Complex;
// @return Complex
//=======================================================================
Complex Complex::operator+(const Complex &c) const
{
    return Complex(a + c.a, b + c.b);
};

//=======================================================================
// @brief Operator add;
// @author Nate Hydukovich
// @param f: double;
// @return Complex
//=======================================================================
Complex Complex::operator+(double f) const
{
    return Complex(a + f, b);
};

//=======================================================================
// @brief Operator add;
// @author Bri Gonzalez
// @param i: int;
// @return Complex
//=======================================================================
Complex Complex::operator+(int i) const
{
    return Complex(a + i, b);
};

//=======================================================================
// @brief Operator subtract;
// @author Nate Hydukovich
// @param c: Complex;
// @return Complex
//=======================================================================
Complex Complex::operator-(const Complex &c) const
{
    return Complex(a - c.a, b - c.b);
};

//=======================================================================
// @brief Operator subtract;
// @author Kien Le T.
// @param f: double;
// @return Complex
//=======================================================================
Complex Complex::operator-(double f) const
{
    return Complex(a - f, b);
};

//=======================================================================
// @brief Operator subtract;
// @author Bri Gonzalez
// @param i: int;
// @return Complex
//=======================================================================
Complex Complex::operator-(int i) const
{
    return Complex(a - i, b);
};

//=======================================================================
// @brief Operator multiply;
// @author Nate Hydukovich
// @param c: Complex;
// @return Complex
//=======================================================================
Complex Complex::operator*(const Complex &c) const
{
    return Complex(a * c.a - b * c.b, a * c.b + b * c.a);
};

//=======================================================================
// @brief Operator multiply;
// @author Bri Gonzalez
// @param f: double
// @return Complex
//=======================================================================
Complex Complex::operator*(double f) const
{
    return Complex(f * a, f * b);
};
//=======================================================================
// @brief Operator multiply;
// @author Kien Le T.
// @param i: int
// @return Complex
//=======================================================================
Complex Complex::operator*(int i) const
{
    return Complex(i * a, i * b);
};

//=======================================================================
// @brief Operator division
// @author Andrew Nguyen
// @param c: Complex
// @return Complex
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
// @brief Operator division
// @author Andrew Nguyen
// @param f: double
// @return Complex
//=======================================================================
Complex Complex::operator/(double f) const
{
    return Complex(a / f, b / f);
};

//=======================================================================
// @brief Operator division
// @author Andrew Nguyen
// @param i: int
// @return Complex
//=======================================================================
Complex Complex::operator/(int i) const
{
    return Complex(a / i, b / i);
};

//=======================================================================
// @brief Operator conjugate
// @author Andrew Nguyen
// @return Complex
//=======================================================================
Complex Complex::operator~(void) const
{
    return Complex(a, -b);
};

//=======================================================================
// @brief Operator exponent
// @author Andrew Nguyen
// @param p: int
// @return Complex
//=======================================================================
Complex Complex::operator^(int p) const
{
    return Complex(pow(pow(a * a + b * b, 0.5), p) * cos(p * atan(b / a)), pow(pow(a * a + b * b, 0.5), p) * sin(p * atan(b / a)));
};

//=======================================================================
// @brief Operator absolute
// @author Nate Hydukovich
// @return double
//=======================================================================
double Complex::abs(void) const
{
    return pow(a * a + b * b, 0.5);
};

//=======================================================================
// @brief Operator negation
// @author Andrew Nguyen
// @return Complex
//=======================================================================
Complex Complex::operator-(void) const
{
    return Complex(-a, -b);
};

//=======================================================================
// @brief Operator equality
// @author Nate Hydukovich
// @param c: Complex
// @return true
// @return false
//=======================================================================
bool Complex::operator==(const Complex &c) const
{
    return (a == c.a && b == c.b);
};

//=======================================================================
// @brief Operator inequality
// @author Bri Gonzalez
// @param c: Complex
// @return true
// @return false
//=======================================================================
bool Complex::operator!=(const Complex &c) const
{
    return (a != c.a || b != c.b);
};

//=======================================================================
// @brief cout << operator overload
// @author Andrew Nguyen
// @param os: ostream
// @param c: Complex
// @return ostream&
//=======================================================================
ostream &operator<<(ostream &os, const Complex &c)
{
    if (c.b == 0)
    {
        os << c.a;
    }
    else if (c.b == 1)
    {
        os << c.a << "+i";
    }
    else if (c.b == -1)
    {
        os << c.a << "-i";
    }
    else if (c.a == 0)
    {
        os << c.b << "i";
    }
    else if (c.b < 0)
    {
        os << c.a << c.b << "i";
    }
    else
    {
        os << c.a << "+" << c.b << "i";
    };
    return os;
};

//=======================================================================
// @brief cin >> operator overload
// @author Andrew Nguyen
// @param is: istream
// @param c: Complex
// @return istream&
//=======================================================================
istream &operator>>(istream &is, Complex &c)
{
    string s, real, imag;
    is >> s;

    size_t iPos = s.find('i');
    size_t pos = s.find_last_of("+-");

    if (iPos != string::npos)
    {
        if (iPos != 0)
        {
            if (pos != string::npos)
            {
                real = s.substr(0, pos);
                imag = s.substr(pos, s.size() - pos - 1);

                if (real.empty())
                    real = '0';

                if (imag == "+")
                    imag = '1';
                else if (imag == "-")
                    imag = "-1";
            }
            else
            {
                real = '0';
                imag = s.substr(0, iPos);
            }
        }
        else
        {
            real = '0';
            imag = '1';
        }
    }
    else
    {
        real = s;
        imag = '0';
    }
    c.a = stof(real);
    c.b = stof(imag);

    return is;
};
