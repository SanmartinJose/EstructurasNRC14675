/***********************************************************************
 * Module:  ListaDoble.h
 * Author:  yeshu
 * Modified: Sunday, December 10, 2023 1:25:51 PM
 * Purpose: Declaration of the class ListaDoble
 ***********************************************************************/

#if !defined(__ListasDoblementeEnlazadas_ListaDoble_h)
#define __ListasDoblementeEnlazadas_ListaDoble_h

#include "Nodo.h"

class ListaDoble
{
public:
   ListaDoble();
   ~ListaDoble();
   void Insertar(int newDato);
   void Buscar(int newDato);
   void Eliminar(int newDato);
   void imprimir_desde_la_cola();
   void imprimir_desde_la_cola_recursiva(Nodo*);
   void Mostrar(void);
   void Invertir(void);
   void InvertirDos();

protected:
private:
   Nodo* cabeza;
   Nodo* cola;


};

#endif