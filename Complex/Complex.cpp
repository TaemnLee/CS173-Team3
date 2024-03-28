//===================================================================
// Taemin, Adam, Tri, Damian
// Complex.cpp
// March 29th, 2024
// This file contains our Complex number class function definitions.
//===================================================================

#include "Complex.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//====================================================================
// Taemin Lee
//
// Default Constructor
// Initializes a Complex object to 0.
// Parameters: none.
// Return Value: none.
//====================================================================
Complex::Complex(void){
    a = 0;
    b = 0;    
}
//====================================================================
// Taemin Lee
//
// Destructor
// Cleans up the memory
// Parameters: none
// Return Value: none
//====================================================================
Complex::~Complex(void){

}
//====================================================================
// Taemin Lee
//
// setReal
// Change the a (real part of complex number) to the specified parameter.
// Parameters: r - double value for real number
// Return Value: none.
//====================================================================
void Complex::setReal(double r){
    a = r;
}
//====================================================================
// Taemin Lee
//
// getImag
// Return the imaginary part of complex number.
// Parameters: none.
// Return Value: b - double value for imaginary number.
//====================================================================
double Complex::getImag(void) const{
    return b;
}
//====================================================================
// Taemin Lee
//
// operator=
// c1 = c2
// Assignment operator
// Parameters: const Complex object &c
// Return Value: 
// first values of &c are assigned to *this and then *this is returned.
//====================================================================
Complex Complex::operator=(const Complex &c){
    a = c.a;
    b = c.b;
    return *this;
}
//====================================================================
// Taemin Lee
//
// operator+
// c1 = c2 + c3
// Will take the components of c2 + c3 and return them to c1.
// Parameters: Complex object c
// Return Value: sum of *this + c
//====================================================================
Complex Complex::operator+(const Complex &c) const{
    Complex ret;

    ret.a = c.a + (*this).a;
    ret.b = c.b + (*this).b;

    return ret;
}
//====================================================================
// Taemin Lee
//
// operator-
// c1 = c2 - f
// Will take the components of c2 - f and return them to c1.
// Parameters: double f
// Return Value: sum of *this - f
//====================================================================
Complex Complex::operator-(double f) const{
    Complex ret;

    ret.a = (*this).a - f;
    ret.b = (*this).b;

    return ret;
}
//====================================================================
// Taemin Lee
//
// operator*
// c1 = c2 * i
// Will take the components of c2 * i and return them to c1.
// Parameters: int i
// Return Value: product of *this * i
//====================================================================
Complex Complex::operator*(int i) const{
    Complex ret;

    ret.a = (*this).a * i;
    ret.b = (*this).b * i;

    return ret;
}
//====================================================================
// Taemin Lee
//
// operator/
// c1 = c2 / i
// Will take the components of c2 / i and return them to c1.
// Parameters: int i
// Return Value: product of *this * 1/i
//====================================================================
Complex Complex::operator/(int i) const{
    Complex ret;

    ret.a = (*this).a * (1/i);
    ret.b = (*this).a * (1/i);

    return ret;
}
//====================================================================
// Taemin Lee
//
// operator~
// a + bi = a - bi 
// Will take the components of c1 and return them to -c1.
// Parameters: none
// Return Value: product of *this * 1/i
//====================================================================
Complex Complex::operator~(void) const{
    Complex ret;

    ret.a = (*this).a;
    ret.b = (*this).b * (-1);

    return ret;
}
//====================================================================
// Taemin Lee
//
// operator^ (exponentiation)
// Will return *this ^ p  where p is an integer
// Parameters: int p
// Return Value: returns *this ^ p power. If p == 0, then returns *this.
// if p < 0, then returns (1/*this)^|p|
//====================================================================
Complex Complex::operator^(int p) const{
    Complex ret(1,1);
    int real, imag;

    if (p >= 0){
        real = a;
        imag = b;
    } else {
        real = a;
        imag = -b;
        p = -p;
    }

    for (int i = 0; i < p; i++){
        ret = ret * (*this);
    }

    return ret;
}