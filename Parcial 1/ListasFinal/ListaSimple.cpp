#include <iostream>
#include "ListaSimple.h"
#include "Nodo.cpp"

ListaSimple::ListaSimple()
{
    cabeza = nullptr;
}
void ListaSimple::insertarCabeza(int valor)
{
    Nodo *nuevoNodo = new Nodo(valor, nullptr);
    if (cabeza == nullptr)
    {
        cabeza = nuevoNodo;
    }
    else
    {
        Nodo *aux = cabeza;
        cabeza = nuevoNodo;
        cabeza->setSiguiente(aux);
    }
}
void ListaSimple::imprimir()
{
    Nodo *aux = cabeza;
    printf("\n");
    while (aux != nullptr)
    {
        printf("%d", aux->getValor());
        aux = aux->getSiguiente();
        printf("\t", 4);
    }
    printf("\n");
}
ListaSimple::~ListaSimple()
{
    // Todo
}