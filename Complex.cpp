#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(void)
{
    a = 0;
    b = 0;
};

Complex::Complex(const Complex &c)
{
    a = c.a;
    b = c.b;
};

Complex::Complex(double x, double y)
{
    a = x;
    b = y;
};

Complex::~Complex()
{};

ostream & operator<< ( ostream & os, const Complex &c )
{
    ostream & << c.a << c.b;
    return ;
};
istream & operator>> ( istream & is, Complex &c )
{

};
