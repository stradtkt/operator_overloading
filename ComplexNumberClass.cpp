//
// Created by Kevin on 10/12/2019.
//

#include "ComplexNumberClass.h"
#include <iostream>
using namespace std;

ComplexNumberClass::ComplexNumberClass(): real(0), imaginary(0) {

}

ComplexNumberClass::ComplexNumberClass(double real, double imaginary): real(real), imaginary(imaginary) {

}

ComplexNumberClass::ComplexNumberClass(const ComplexNumberClass &other) {
    cout << "Copy" << endl;
    real = other.real;
    imaginary = other.imaginary;
}

const ComplexNumberClass &ComplexNumberClass::operator=(const ComplexNumberClass &other) {
    real = other.real;
    imaginary = other.imaginary;
    return *this;
}
