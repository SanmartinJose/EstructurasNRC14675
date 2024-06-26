/***********************************************************************
 * Module:  Nodo.cpp
 * Author:  yeshu
 * Modified: Sunday, December 10, 2023 1:25:51 PM
 * Purpose: Implementation of the class Nodo
 ***********************************************************************/

#include "Nodo.h"

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::Nodo(int newDato)
// Purpose:    Implementation of Nodo::Nodo()
// Parameters:
// - newDato
// Return:     
////////////////////////////////////////////////////////////////////////

Nodo::Nodo(int newDato)
{
   dato = newDato;
   siguiente = nullptr;
   anterior = nullptr;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::~Nodo()
// Purpose:    Implementation of Nodo::~Nodo()
// Return:     
////////////////////////////////////////////////////////////////////////

Nodo::~Nodo()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getDato()
// Purpose:    Implementation of Nodo::getDato()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Nodo::getDato(void)
{
   return dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setDato(int newDato)
// Purpose:    Implementation of Nodo::setDato()
// Parameters:
// - newDato
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setDato(int newDato)
{
   dato = newDato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getAnterior()
// Purpose:    Implementation of Nodo::getAnterior()
// Return:     Nodo*
////////////////////////////////////////////////////////////////////////

Nodo* Nodo::getAnterior(void)
{
   return anterior;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setAnterior(Nodo* newAnterior)
// Purpose:    Implementation of Nodo::setAnterior()
// Parameters:
// - newAnterior
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setAnterior(Nodo* newAnterior)
{
   anterior = newAnterior;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getSiguiente()
// Purpose:    Implementation of Nodo::getSiguiente()
// Return:     Nodo*
////////////////////////////////////////////////////////////////////////

Nodo* Nodo::getSiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setSiguiente(Nodo* newSiguiente)
// Purpose:    Implementation of Nodo::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setSiguiente(Nodo* newSiguiente)
{
   siguiente = newSiguiente;
}
////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setSiguiente(Nodo* newSiguiente)
// Purpose:    Implementation of Nodo::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////
Nodo::Nodo(int datoAgregado, Nodo* nAnterior, Nodo* nSiguiente){
   dato = datoAgregado;
   nAnterior=anterior;
   nSiguiente=siguiente;
}


