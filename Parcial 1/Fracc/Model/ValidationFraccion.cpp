/**
 * Project Untitled
 */


#include "ValidationFraccion.h"

/**
 * ValidationFraccion implementation
 */


/**
 * @param fraccion
 * @return bool
 */
bool ValidationFraccion::isValidFraccion(Fraccion& fraccion) {
    return fraccion.getDenominator()!=0;
}

/**
 * @param fraccion
 * @return Fraccion
 */
Fraccion ValidationFraccion::simplifyFraccion(Fraccion& fraccion) {
    //Logica para simplificar fracciones
    int denominator=fraccion.getDenominator();
    int numerator=fraccion.getNumerator();
    //Algoritmo para calcular el minimo comun divisor
    while (denominator!=0)
    {
        int temp=denominator;
       denominator=numerator%denominator;
       numerator=temp;
    }
    int MCD=numerator;
    int newNumerator=fraccion.getNumerator()/MCD;
    int newDenominator=fraccion.getDenominator()/MCD;

    return Fraccion(newNumerator,newDenominator);
    
}

/**
 * @param fraccion
 * @return bool
 */
bool ValidationFraccion::equalFraccion(Fraccion& fraccionOne,Fraccion& fraccionTwo) {
    if(fraccionOne.getNumerator()==fraccionTwo.getNumerator() && fraccionOne.getDenominator()==fraccionTwo.getDenominator()){
        return true;
    } else{
        return false;
    }
}