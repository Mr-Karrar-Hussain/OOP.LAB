#ifndef fraction_H
#define fraction_H


class Fraction{
    private: 
    int numenator{};     
    int denominator{1};  
    public:
    Fraction();
    Fraction(int ,int);
    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(int);           
    void setDenominator(int);        
    Fraction add(const Fraction& ) const;       
    Fraction minus(const Fraction&) const;        
    Fraction multiply(const Fraction&) const;     
    Fraction divide(const Fraction&) const;
    void print() const;       
};
#endif