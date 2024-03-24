/***********************************************************************
 * Module:  ListaDoble.cpp
 * Author:  yeshu
 * Modified: Sunday, December 10, 2023 1:25:51 PM
 * Purpose: Implementation of the class ListaDoble
 ***********************************************************************/

#include "ListaDoble.h"
#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::ListaDoble()
// Purpose:    Implementation of ListaDoble::ListaDoble()
// Return:     
////////////////////////////////////////////////////////////////////////

ListaDoble::ListaDoble()
{
   cabeza = nullptr;//primero
   cola = nullptr;//ultimo
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::~ListaDoble()
// Purpose:    Implementation of ListaDoble::~ListaDoble()
// Return:     
////////////////////////////////////////////////////////////////////////

ListaDoble::~ListaDoble()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::Insertar(int newDato)
// Purpose:    Implementation of ListaDoble::Insertar()
// Parameters:
// - newDato
// Return:     void
////////////////////////////////////////////////////////////////////////

void ListaDoble::Insertar(int newDato)
{
   Nodo* nuevo = new Nodo(newDato);
   if (cabeza == nullptr)
   {
      cabeza = nuevo;
      cola = nuevo;
   }
   else
   {
      cola -> setSiguiente(nuevo);
      cabeza -> setAnterior(nuevo);
      cola = nuevo;
   }
   
   
}
bool ListaDoble::InsertarMedio(int newDato, int dondeIngresa){
   Nodo* nuevo;  
   nuevo=cabeza; 
   while(nuevo!=nullptr && nuevo->getDato()!=newDato){
      nuevo=nuevo->getSiguiente();
      }
      if (nuevo==nullptr){
         return false;
      }
      Nodo* nuevoDato = new Nodo(newDato, nullptr,nullptr);
      nuevoDato->setDato(dondeIngresa);
      nuevoDato->setAnterior(nuevo);
      nuevoDato->setSiguiente(nuevo->getSiguiente());
      //nodos vecinos 
      if(nuevo->getSiguiente()!=nullptr){
         nuevo->getSiguiente()->setAnterior(nuevoDato);         
      }
      nuevo->setSiguiente(nuevoDato);
      return true;    
   
}
////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::Buscar(int newDato)
// Purpose:    Implementation of ListaDoble::Buscar()
// Parameters:
// - newDato
// Return:     void
////////////////////////////////////////////////////////////////////////

void ListaDoble::Buscar(int newDato)
{
   Nodo* aux = cabeza;
   while (aux != nullptr)
   {
      if (aux->getDato() == newDato)
      {
         printf("\nEl dato %d se encuentra en la lista",newDato);
         cout << endl;
         return;
      }
      aux = aux->getSiguiente();
      
   }
   printf("\nEl dato %d no se encuentra en la lista",newDato);
   cout << endl;
   
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::Eliminar(int newDato)
// Purpose:    Implementation of ListaDoble::Eliminar()
// Parameters:
// - newDato
// Return:     void
////////////////////////////////////////////////////////////////////////

void ListaDoble::Eliminar(int newDato)
{
   Nodo* aux = cabeza;
   while (aux != nullptr)
   {
      if (aux->getDato() == newDato)
      {
         if (aux == cabeza)
         {
            cabeza = cabeza->getSiguiente();
            cabeza->setAnterior(nullptr); 
         }
         else if (aux == cola)
         {
            cola = cola->getAnterior();
            cola->setSiguiente(nullptr);
         }
         else
         {
            aux->getAnterior()->setSiguiente(aux->getSiguiente());
            aux->getSiguiente()->setAnterior(aux->getAnterior());
         }
         delete aux;
         printf("\nEl nodo con el valor %d se ha elminado de la lista", newDato);
         cout << endl;
         return;
         
      }
      aux = aux->getSiguiente();
      
   }
   printf("\nEl dato %d no se encuentra en la lista", newDato);
   cout << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::Mostrar()
// Purpose:    Implementation of ListaDoble::Mostrar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void ListaDoble::Mostrar(void)
{
   Nodo* aux = cabeza;
   
   while (aux != nullptr)
   {
      printf("%d\t",aux->getDato());
     
      aux = aux->getSiguiente();
   }
   
   cout << endl;
   
}
void ListaDoble::imprimir_desde_la_cola_recursiva(Nodo* nodo_actual){
    if(nodo_actual==nullptr){
        return;
    }
    imprimir_desde_la_cola_recursiva(nodo_actual->getSiguiente());
    printf("%d\t",nodo_actual->getDato());

}
void ListaDoble::imprimir_desde_la_cola(){    
    imprimir_desde_la_cola_recursiva(cabeza);
    printf("\n");
}
void ListaDoble::Invertir() {
   Nodo* anterior = nullptr;
   Nodo* siguiente = nullptr;
   Nodo* actual = cabeza;
   while (actual != nullptr) {
      siguiente = actual->getSiguiente();
      actual->setSiguiente(anterior);
      actual->setAnterior(siguiente);
      anterior = actual;
      actual = siguiente;      
   }
   
}

int ListaDoble::sumarDigitosPares(Nodo* nodo){   
   if (nodo == nullptr) {
        return 0;
    }

    // Obtenemos el número actual del nodo y su siguiente nodo.
    int numeroActual = nodo->getDato();
    Nodo* siguienteNodo = nodo->getSiguiente();

    // Obtenemos el último dígito para ver si es par.
    int ultimoDigito = abs(numeroActual % 10);

    // Si el último dígito es par, sumamos ese dígito con la suma de los dígitos pares del siguiente nodo.
    // Si no es par, solo sumamos los dígitos pares del siguiente nodo.
    if (ultimoDigito % 2 == 0) {
        return ultimoDigito + sumarDigitosPares(siguienteNodo);
    } else {
        return sumarDigitosPares(siguienteNodo);
    }  
}
