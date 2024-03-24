/**
 * Project Untitled
 */


#include "Fraccion.h"

/**
 * Fraccion implementation
 */

/**
 * @param numerator
 * @param denominator
 */
Fraccion::Fraccion(int numerator, int denominator) {
    this->numerator=numerator;
    this->denominator=denominator;
}
Fraccion::Fraccion(){
    numerator=0;
    denominator=1;
}

/**
 * @return int
 */
int Fraccion::getNumerator() {
    return numerator;
}

/**
 * @return int
 */
int Fraccion::getDenominator() {
    return denominator;
}

/**
 * @param numerator
 */
void Fraccion::setNumerator(int numerator) {
    this->numerator=numerator;
}

/**
 * @param denominator
 */
void Fraccion::setDenominator(int denominator) {
    this->denominator=denominator;
}




