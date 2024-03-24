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
      printf("\t""%d",aux->getDato());      
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

void ListaDoble::Invertir(void) {
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
   cabeza = anterior;
   imprimir_desde_la_cola_recursiva(cabeza);
}
void ListaDoble::InvertirDos() {
   Nodo* actual = cabeza;
   while(actual!= nullptr && actual->getSiguiente()!=nullptr)//Mientras el acutal como el siguiente sean diferentes de null
   {
      Nodo* aux = actual;//creo un aux que me permita obtener el nodo actual
      Nodo* aux2=actual->getSiguiente();//recorro el siguiente nodo
      int temp = aux->getDato();//creo temporal que me traiga el dato del nodo 
      aux->setDato(aux2->getDato());//seteo el nodo1 con el valor del nodo2
      nodo2->setDato(temp);//le seteo el nuevo dato al nodo 2
      actual=nodo2->getSiguiente(); //recorro la lista 
   }
}
   

