/***********************************************************************
 * Module:  Nodo.h
 * Author:  yeshu
 * Modified: Sunday, December 10, 2023 1:25:51 PM
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__ListasDoblementeEnlazadas_Nodo_h)
#define __ListasDoblementeEnlazadas_Nodo_h

class Nodo
{
public:
   Nodo(int newDato);
   Nodo(int datoAgregado, Nodo* nAnterior, Nodo* nSiguiente);
   ~Nodo();
   int getDato(void);
   void setDato(int newDato);
   Nodo* getAnterior(void);
   void setAnterior(Nodo* newAnterior);
   Nodo* getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);

protected:
private:
   int dato;
   Nodo* siguiente;
   Nodo* anterior;

};

#endif