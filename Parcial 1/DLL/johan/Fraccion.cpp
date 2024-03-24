/***********************************************************************
 * Module:  Fraccion.cpp
 * Author:  joanc
 * Modified: martes, 14 de noviembre de 2023 06:45:04 p. m.
 * Purpose: Implementation of the class Fraccion
 ***********************************************************************/

#include "Fraccion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion(int num, int den)
// Purpose:    Implementation of Fraccion::Fraccion()
// Parameters:
// - num
// - den
// Return:
////////////////////////////////////////////////////////////////////////
/**
 * @brief Constructor de fraccion
 *
 * @param num
 * @param den
 */
Fraccion::Fraccion(int num, int den)
{
    numerador = num;
    denominador = den;
}


////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getDenominador()
// Purpose:    Implementation of Fraccion::getDenominador()
// Return:     int
////////////////////////////////////////////////////////////////////////
/**
 * @brief Getter de denominador
 *
 * @return denominador
 */
int Fraccion::getDenominador()
{
   return denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setDenominador(int newDenominador)
// Purpose:    Implementation of Fraccion::setDenominador()
// Parameters:
// - newDenominador
// Return:     void
////////////////////////////////////////////////////////////////////////
/**
 * @brief Setter de denominador
 *
 * @param newDenominador
 */
void Fraccion::setDenominador(int newDenominador)
{
   denominador = newDenominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getNumerador()
// Purpose:    Implementation of Fraccion::getNumerador()
// Return:     int
////////////////////////////////////////////////////////////////////////
/**
 * @brief Getter de numerador
 *
 * @return numerador
 */
int Fraccion::getNumerador()
{
   return numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setNumerador(int newNumerador)
// Purpose:    Implementation of Fraccion::setNumerador()
// Parameters:
// - newNumerador
// Return:     void
////////////////////////////////////////////////////////////////////////
/**
 * @brief Setter de numerador
 *
 * @param newNumerador
 */
void Fraccion::setNumerador(int newNumerador)
{
   numerador = newNumerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::~Fraccion()
// Purpose:    Implementation of Fraccion::~Fraccion()
// Return:
////////////////////////////////////////////////////////////////////////

Fraccion::~Fraccion()
{
   // TODO : implement
}
