
#include "Cliente.h"
#include "Nodo.h"

Nodo* Nodo::getSiguiente(){
    return siguiente;
}

void Nodo::setSiguiente(Nodo* newNodo)
{
   siguiente = newNodo;
}

int Nodo::getValor(void)
{
   return valor;
}

void Nodo::setValor(int newValor)
{
   valor = newValor;
}



Nodo::~Nodo()
{
   // TODO : implement
}
