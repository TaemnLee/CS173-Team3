//========================================================
// Matt Kretchmar
// Complex.h
// March 2024
// This file contains the class declaration for the
// Complex number class.
// DO NOT CHANGE THIS FILE!!!
//========================================================

#include <iostream>
using namespace std;

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double a;          // number = a + bi
    double b;
public:
                Complex         ( void );
                Complex         ( const Complex &c );
                Complex         ( double x, double y=0 );
               ~Complex         ( void );
    void        setReal         ( double r );
    double      getReal         ( void ) const;
    void        setImag         ( double r );
    double      getImag         ( void ) const;
    Complex     operator=       ( const Complex &c );
    Complex     operator+       ( const Complex &c ) const;
    Complex     operator+       ( double f ) const;
    Complex     operator+       ( int i ) const;
    Complex     operator-       ( const Complex &c ) const;
    Complex     operator-       ( double f ) const;
    Complex     operator-       ( int i ) const;
    Complex     operator*       ( const Complex &c ) const;
    Complex     operator*       ( double f ) const;
    Complex     operator*       ( int i ) const;
    Complex     operator/       ( const Complex &c ) const;
    Complex     operator/       ( double f ) const;
    Complex     operator/       ( int i ) const;
    Complex     operator~       ( void ) const;
    Complex     operator^       ( int p ) const;
    double      abs             ( void ) const;
    Complex     operator-       ( void ) const;
    bool        operator==      ( const Complex &c ) const;
    bool        operator!=      ( const Complex &c ) const;

    friend ostream & operator<< ( ostream &, const Complex &c );
    friend istream & operator>> ( istream &, Complex &c );
};


#endif
