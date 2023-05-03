#include <iostream>
#include <stdexcept>
#include <sstream>
#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace std;
using namespace ariel;

TEST_CASE("check the function throw and not throw")
{
    CHECK_NOTHROW(Fraction(2,1));
    CHECK_THROWS(Fraction(2,0)); 
}

TEST_CASE("check the Fraction reduce the Denominator and Numerator")
{
    CHECK(Fraction(10,20)==Fraction(1,2));
}

TEST_CASE("check the function getDenominator() and getNumerator()")
{
    Fraction a(1,2);
    float demo =  a.getDenominator();
    float numer = a.getNumerator();
    CHECK(demo == 2);
    CHECK(numer == 1);
}

TEST_CASE("check the function setDenominator() and setNumerator()")
{
    Fraction a(8,16);
    a.setDenominator(3);
    a.setNumerator(2);
    CHECK(a.getDenominator() == 3);
    CHECK(a.getNumerator() == 2);
}

TEST_CASE("check +")
{
    Fraction b(8,16);
    Fraction c(7,14);
    CHECK((b <= c) == true);
    b = b + Fraction(1,3);
    CHECK((b > c) == true);
    CHECK((b == c) == false);
    CHECK((c <= b) == true);

    Fraction add(Fraction(1,3)+Fraction(1,3));
    CHECK((add == Fraction(2,3))==true);
    CHECK((b>=add) == true);
    CHECK((b < add) == false);
}

TEST_CASE("check the function == < <= > >=")
{
    Fraction b(0.5);
    Fraction c(7,14);
    CHECK((b == c) == true);
    b = b + 0.1;
    CHECK((b > 0.5) == true);
    CHECK((b == 0.6) == false);
    CHECK((c <= 0.9) == true);
    Fraction add(Fraction(1,10)+0.2);
    CHECK((add == Fraction(0.3))==true);
    CHECK((b>=add) == true);
    CHECK((b < add) == false);
}

TEST_CASE("check the function + - ++ --")
{
    CHECK(Fraction(9,10)-Fraction(1,10)==Fraction(8,10));
    CHECK(Fraction(9,10)-Fraction(0.1)==Fraction(8,10));
    CHECK(Fraction(9,10)+Fraction(1,10)==Fraction(1,1));
    CHECK(Fraction(9,10)++==Fraction(19,10));
    CHECK(Fraction(19,10)--==Fraction(9,10));
}

TEST_CASE("check the function / and *")
{
    CHECK(Fraction(9,10)*Fraction(0.1)==Fraction(9,100));
    CHECK(Fraction(9,10)*Fraction(1,10)==Fraction(9,100));
    CHECK(Fraction(0.9)*Fraction(0.1)==Fraction(9,100));
    CHECK(Fraction(0.1)*Fraction(9,10)==Fraction(9,100));
    CHECK(Fraction(1,1)/Fraction(0.1)==Fraction(10,1));
    CHECK(Fraction(1)/Fraction(0.1)==Fraction(10,1));
    CHECK(Fraction(1,1)/Fraction(1,10)==Fraction(10,1));
    CHECK(Fraction(0.1)/Fraction(1,1)==Fraction(1,10));
    CHECK_THROWS(Fraction(1,1)/Fraction(0));
}