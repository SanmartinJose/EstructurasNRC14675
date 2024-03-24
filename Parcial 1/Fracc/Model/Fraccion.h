/**
 * Project Untitled
 */


#ifndef _FRACCION_H
#define _FRACCION_H

class Fraccion {
public:
    //CONSTRUCTORES
    /**
     * @param numerator
     * @param denominator
     */
    Fraccion(int numerator, int denominator);

    Fraccion();
    //METODOS GETTERS Y SETTERS
    int getNumerator();
        
    int getDenominator();
        
    /**
     * @param numerator
     */
    void setNumerator(int numerator);
        
    /**
     * @param denominator
     */
    void setDenominator(int denominator);
    
    

private: 
    int numerator;
    int denominator;
};

#endif //_FRACCION_H