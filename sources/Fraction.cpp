#include "Fraction.hpp"
#include <iostream>
using namespace ariel;
using namespace std;

// constractor
Fraction ::Fraction(int numerator, int denominator)
{
    this->numerator = numerator;
    this->denominator = denominator;
};

Fraction ::Fraction(float number)
{
}
Fraction ::Fraction(const Fraction &fraction)
{
}
Fraction ::Fraction()
{
}
int Fraction ::getNumerator() const
{
    return 0;
}
int Fraction ::getDenominator() const
{
    return 0;
}
void Fraction ::setNumerator(int numerator)
{
}
void Fraction ::setDenominator(int denominator)
{
}

Fraction Fraction ::operator+(const Fraction &fraction)
{
    Fraction a(1,2);
    return a;
};

Fraction Fraction ::operator-(const Fraction &fraction)
{
    Fraction a(1,2);
    return a;
};

Fraction Fraction ::operator/(const Fraction &fraction)
{
    Fraction a(1,2);
    return a;
};

Fraction Fraction ::operator*(const Fraction &fraction)
{
    Fraction a(1,2);
    return a;
};

Fraction Fraction ::operator+(const float number)
{
    Fraction a(1,2);
    return a;
};

Fraction Fraction ::operator-(const float number)
{
    Fraction a(1,2);
    return a;
};

Fraction Fraction ::operator/(const float number)
{
    Fraction a(1,2);
    return a;
};

Fraction Fraction ::operator*(const float number)
{
    Fraction a(1,2);
    return a;
};

Fraction operator+( float number,const Fraction& fraction)
{
    Fraction a(1,2);
    return a;
};

Fraction operator-( float number,const Fraction& fraction)
{
    Fraction a(1,2);
    return a;
};

Fraction operator/( float number,const Fraction& fraction)
{
    Fraction a(1,2);
    return a;
};

Fraction operator*( float number,const Fraction& fraction)
{
    Fraction a(1,2);
    return a;
};

Fraction &Fraction ::operator++()
{
    Fraction a(1,2);
    return *this;
};

Fraction &Fraction ::operator--()
{
    Fraction a(1,2);
    return *this;
};

Fraction Fraction ::operator++(int number)
{
    Fraction a(1,2);
    return a;
};

Fraction Fraction ::operator--(int number)
{
    Fraction a(1,2);
    return a;
};

bool Fraction ::operator>=(const float number)
{
    return false;
};

bool Fraction ::operator>(const float number)
{
    return false;
};

bool Fraction ::operator<=(const float number)
{
    return false;
};

bool Fraction ::operator<(const float number)
{
    return false;
};

bool Fraction ::operator==(const float number)
{
    return false;
};

bool Fraction ::operator>=(const Fraction &fraction) const
{
    return false;
};

bool Fraction ::operator>(const Fraction &fraction) const
{
    return false;
};

bool Fraction ::operator<=(const Fraction &fraction) const
{
    return false;
};

bool Fraction ::operator<(const Fraction &fraction) const
{
    return false;
};

bool Fraction ::operator==(const Fraction &fraction) const
{
    return false;
};

bool operator>=(float number, const Fraction &fraction)
{
    return false;
};

bool operator>(float number, const Fraction &fraction)
{
    return false;
};

bool operator<=(float number, const Fraction &fraction)
{
    return false;
};

bool operator<(float number, const Fraction &fraction)
{
    return false;
};

bool operator==(float number, const Fraction &fraction)
{
    return false;
};

ostream &operator<<(ostream &output, const Fraction &fraction)
{
    return (output << fraction.getNumerator() << '/' << fraction.getDenominator() << ' ');
}

istream &operator>>(istream &input, Fraction &fraction)
{
    return input;
}