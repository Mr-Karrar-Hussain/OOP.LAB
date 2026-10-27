
#include <iostream>
#include "fraction.h"
using namespace std;
Fraction::Fraction():numenator(0),denominator(1)
{
}
Fraction::Fraction(int n, int d)
{
     numenator=n, denominator=(d== 0?1:d);
}
int Fraction::getNumerator() const {
    return numenator;
}
int Fraction::getDenominator() const {
    return denominator;
}
void Fraction::setNumerator(int n) {
    numenator=n;
}
void Fraction::setDenominator(int d) {
    if (d!=0) {
        denominator= d;
    }
}
Fraction Fraction::add(const Fraction& f) const {
    return Fraction(
        numenator *f.denominator +f.numenator* denominator,
        denominator* f.denominator
    );
}
Fraction Fraction::minus(const Fraction& f) const {
    return Fraction(
        numenator *f.denominator- f.numenator* denominator,
        denominator *f.denominator
    );
}
Fraction Fraction::multiply(const Fraction& f) const {
    return Fraction(
        numenator* f.numenator,
        denominator *f.denominator
    );
}
Fraction Fraction::divide(const Fraction& f) const {
    if (f.numenator == 0) {
        cout << "Error: Cannot divide by zero fraction." << endl;
        return Fraction();
    }
    return Fraction(
        numenator * f.denominator,
        denominator * f.numenator
    );
}
void Fraction::print() const {
    cout<<numenator<<"/"<<denominator<<endl;
}
