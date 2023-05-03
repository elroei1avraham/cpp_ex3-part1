#pragma once
#include <string>
#include <iostream>

using namespace std;
namespace ariel
{
}
    class Fraction
    {
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int numerator, int denominator);
        Fraction(float num);
        Fraction(const Fraction &fraction);
        Fraction();
        int getNumerator() const;
        int getDenominator() const;
        void setNumerator(int numerator);
        void setDenominator(int denominator);
        Fraction operator+(const Fraction &number) ;
        Fraction operator-(const Fraction &number) ;
        Fraction operator/(const Fraction &number) ;
        Fraction operator*(const Fraction &number) ;
        Fraction operator+(const float number) ;
        Fraction operator-(const float number) ;
        Fraction operator/(const float number) ;
        Fraction operator*(const float number) ;
        friend Fraction operator+(float, const Fraction &number);
        friend Fraction operator-(float, const Fraction &number);
        friend Fraction operator/(float, const Fraction &number);
        friend Fraction operator*(float, const Fraction &number);
        Fraction &operator++();
        Fraction operator++(int dummy);
        Fraction &operator--();
        Fraction operator--(int dummy);

        bool operator>=(const float number);
        bool operator>(const float number);
        bool operator<(float number);
        bool operator<=(float number);
        bool operator==(float number);
        bool operator<(const Fraction &fraction) const;
        bool operator<=(const Fraction &fraction) const;
        bool operator>(const Fraction &fraction) const;
        bool operator>=(const Fraction &fraction) const;
        bool operator==(const Fraction &fraction) const;
        friend bool operator<(float number, const Fraction &fraction);
        friend bool operator<=(float number, const Fraction &fraction);
        friend bool operator>(float number, const Fraction &fraction);
        friend bool operator>=(float number, const Fraction &fraction);
        friend bool operator==(float number, const Fraction &fraction);

        friend ostream &operator<<(ostream &output, const Fraction &fraction);
        friend istream &operator>>(istream &input, Fraction &fraction);
    };
