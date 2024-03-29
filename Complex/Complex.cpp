
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
#include <cstddef>
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

// ====================================================
// Copy constructor
// Author: Damian Nguyen
// Constructs a complex object as a copy of another Complex object.
// Parameter: variable c of complex class passed by reference
// Return value: None
// ====================================================

            Complex::Complex        ( const Complex &c ) {
    a = c.a;
    b = c.b;
}
// =======================================================================
// Constructor (a,b)
// Author: Adam Cristo
// Parameters:
//   - x: The value for the real part of the complex number
//   - y: The value for the imaginary part. Defaults to 0 if not provided.
// Return value: none
// =======================================================================
Complex::Complex (const double x, double y){
    a = x;
    b = y;
}
//====================================================================
// Taemin Lee
//
// Destructor
// Destroys the Complex object and cleans up the memory
// Parameters: none
// Return Value: none
//====================================================================
Complex::~Complex(void){

}
//====================================================================
// Taemin Lee
//
// setReal
// Change a (real part of complex number) to the specified parameter.
// Parameters: r - double value for real number
// Return Value: none.
//====================================================================
void Complex::setReal(double r){
    a = r;
}
// ====================================================
// Accessor method getReal
// Author: Damian Nguyen
// Retrieves the real part of the complex number.
// Parameter: None
// Return value: return the real part of a complex number class as double
// ====================================================

double      Complex::getReal         ( void ) const {
    return a;
}
//====================================================================
// Accessor method setImag.
// Author: Adam Cristo
// Change b (imaginary part) to the specified parameter.
// Parameters: r = double value for imaginary number
// Return value is none
//====================================================================
void Complex::setImag(double r){
    b = r;
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
// Assignment operator
// Assigns the real and imaginary part of another Complex object
// to this Complex object.
// Parameters: c - a const reference to the Complex object whose values 
//                  will be assigned to this object.
// Return Value: 
// A reference to this Complex object after assignment.
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
// Computes the sum of this Complex object and another Complex object.
// Parameters: c - a const reference to the Complex object that will 
//                 be added to this object.
// Return Value: sum of *this + c
//====================================================================
Complex Complex::operator+(const Complex &c) const{
    Complex ret;

    ret.a = c.a + (*this).a;
    ret.b = c.b + (*this).b;

    return ret;
}
// ====================================================
// Operator+ overload with adding decimal
// Author: Damian Nguyen
// Parameter: None
// Create a Complex variable ret and perfom necessary addition with the real part
// Return value: ret 
// ====================================================
Complex     Complex::operator+       ( double f ) const {
    Complex ret; 
    ret.a = a + f;
    ret.b = b;
    return ret;
}
// Operator + adding integers
// Author: Adam Cristo
// creates the verable and adds the integer.
// returns ret
Complex Complex::operator+ (int i) const{
    Complex ret;
    ret.a = a + i;
    ret.b = b;
    return ret;
}
// ====================================================
// Operator- overload with subtracting complex number
// Author: Damian Nguyen
// Parameter: None
// Create a Complex variable ret and perfom necessary subtraction with the real part
// and imaginary part.
// Return value: ret 
// ====================================================
Complex     Complex::operator-       ( const Complex &c ) const {
    Complex ret;
    ret.a = a - c.a;
    ret.b = b - c.b;
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
// Operator - subtraction
// Author: Adam Cristo
// subtracts the variable by the integer
// returns ret
Complex Complex::operator- (int i) const{
    Complex ret;
    ret.a = a - i;
    ret.b = b;
    return ret;
}
// ====================================================
// Operator* overload with multiplying complex number
// Author: Damian Nguyen
// Parameter: None
// Create a Complex variable ret and perfom necessary multiplcation with the real part
// and imaginary part.
// Return value: ret 
// ====================================================
Complex     Complex::operator*       ( const Complex &c ) const {
    Complex ret; 
    ret.a = a*c.a - b*c.b;
    ret.b = a*c.b + + b*c.a;
    return ret;
}
// Operator * multiplication
// Author: Adam Cristo
// Multiplies the a times the float and the b times the float
// Returns ret
Complex Complex::operator* (const double f) const{
    Complex ret;
    ret.a = a * f;
    ret.b = b * f;
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
// Operator / division
// Author: Adam Cristo
// Checks if the variables are not 0
// Does the complex forumula for complex number division
// returns ret
Complex Complex::operator/ (const Complex &c) const{
    Complex ret;
    if (c.a == 0 && c.b == 0){
        cout << "Cannot divide by 0";
        exit(1);
    }
    ret.a = ((a*c.a)+(b*c.b))/((c.^2)+(c.b^2));
    ret.b = ((b*c.a)-(a*c.b))/((c.a^2)+(c.b^2));
    return ret;
}
// ====================================================
// Operator/ overload with dividing decimal
// Author: Damian Nguyen
// Parameter: None
// Create a Complex variable ret and perfom necessary division with the real part
// Return value: ret 
// ====================================================

Complex     Complex::operator/       ( double f ) const {
    Complex ret;
    if (f == 0) { //check if f = 0, cant divide
        cout << "Cannot divide by 0";
        exit(1);
    }
    ret.a = a/f;
    ret.b = b/f;
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
// ====================================================
// Operator~ overload
// Author: Damian Nguyen
// Parameter: None
// Create a Complex variable ret and perfom negation of sign
// Return value: ret 
// ====================================================
Complex     Complex::operator~       ( void ) const {
    Complex ret; 
    ret.a = -1*a;
    ret.b = -1*b;
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

// ====================================================
// Operator== overload 
// Author: Damian Nguyen
// Parameter: None
// Return value: Return true if real part is equal and imaginary part is equal and false otherwise
// ====================================================

bool        Complex::operator==      ( const Complex &c ) const {
    bool result;
    if (a == c.a && b == c.b) 
        result = true;
    else 
        result = false; 

    return result;
}
// Operator != does not equal
// Author: Adam Cristo
// Checks if the variables are not equal to each other.
// Return value is the result whether true or false (bool)
bool Complex::operator!= (const Complex &c) const{
    bool result;
    if (a != c.a || b != c.b){
        result = true;
    } else {
        result = false;
    }
    return result;
}
// ====================================================
// cin >> overload to allow cin >> c
// Author: Damian Nguyen
// Parameter: istream is and Complex c
// Return value: istream is 
// Note: We first scan for "i", indicating whether the imaginary part is !=0 or not
// then we scan for '+' and '-' to check each cases whether it is 
// a + bi, bi, -bi or -a - bi.
// ====================================================
istream & operator>>(istream &is, Complex &c) {
    string input, realPart, imagPart;
    size_t iPos, plusPos, minusPos;

    is >> input;

    // Find the position of 'i'
    iPos = input.find('i');
    plusPos = input.find('+');
    minusPos = input.find('-');


    // Determine if the input has an imaginary part
    if (iPos != string::npos) {  //has an imaginary part
        if (plusPos != string::npos && plusPos != 0) { //positive imaginary part and real part !=0
            realPart = input.substr(0,plusPos);
            imagPart = input.substr(plusPos);
        }
        else if (plusPos == string::npos && minusPos == string::npos) { //no plus sign and no negative meaning imaginary part is positive
            realPart = '0';                                             // with no real part (real = 0)
            imagPart = input;
        }
        else if (minusPos != string::npos && minusPos != 0) { //negative imaginary part with positve real part
            realPart = input.substr(0,minusPos);
            imagPart = input.substr(minusPos);
        }

        else if (minusPos != string::npos && minusPos == 0) { //minus found at the first position
            input.erase(0,1);
            minusPos = input.find('-');
            if (minusPos != string::npos) {  //negative real part with negative imaginary part
                realPart = '-' + input.substr(0, minusPos);
                imagPart = input.substr(minusPos);
            }
            else { 
                realPart = '0'; //if after deleting the first minus there is no more, then negative imaginary part with no real part
                imagPart = '-' + input;
            }
        }


    }
    else { //no imaginary part, only real part
        realPart = input; 
        imagPart = '0';
    }

    c.a = stod(realPart);
    c.b = stod(imagPart);

    return is;
}
