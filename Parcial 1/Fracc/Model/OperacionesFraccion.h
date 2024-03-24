#include "Fraccion.h"

//Funcion normal

Fraccion addFraccion(Fraccion a,Fraccion b){
    int newNumerator=(a.getNumerator()*b.getDenominator())+(b.getNumerator()*a.getDenominator());
    int newDenominator=a.getDenominator()*b.getDenominator();
    return Fraccion(newNumerator,newDenominator);
}

//Funcion transformada a lambda

//Fraction calc(Fraction& fraction1, Fraction& fraction2);

auto calc = [] (Fraccion& a, Fraccion& b){
    int SumOfNumerator = (a.getNumerator() * b.getDenominator()) +
                            (b.getNumerator() * a.getDenominator());
    int SumOfDenominator = (a.getDenominator() * b.getDenominator());

    return Fraccion(SumOfNumerator, SumOfDenominator);
};

