//
// Created by Kevin on 10/12/2019.
//

#ifndef OPERATOR_OVERLOADING_COMPLEXNUMBERCLASS_H
#define OPERATOR_OVERLOADING_COMPLEXNUMBERCLASS_H

#include <iostream>
using namespace std;

class ComplexNumberClass {
private:
    double real;
    double imaginary;
public:
    ComplexNumberClass();
    ComplexNumberClass(double real, double imaginary);
    ComplexNumberClass(const ComplexNumberClass &other);
    const ComplexNumberClass &operator=(const ComplexNumberClass &other);
    double getReal() const {return real;}
    double getImaginary() const {return imaginary;}
};

ostream &operator<<(ostream &out, const ComplexNumberClass &c);

#endif //OPERATOR_OVERLOADING_COMPLEXNUMBERCLASS_H
