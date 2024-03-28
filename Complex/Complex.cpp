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
// operator+
// c1 = c2 + c3
// Parameters: none
// Return Value: none
//====================================================================