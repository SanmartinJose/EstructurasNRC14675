#include <iostream>
#include "ListaSimple.h"
#include "Nodo.h"

ListaSimple::ListaSimple()
{
    cabeza = nullptr;
}

void ListaSimple::insertar_cabeza(int valor){
    Nodo* nodo_nuevo = new Nodo(valor, nullptr);
    if(cabeza == nullptr){
        cabeza = nodo_nuevo;
    }
    else{
        Nodo* aux = cabeza;
        cabeza = nodo_nuevo;
        cabeza->set_siguiente(aux);
    }
}

void ListaSimple::imprimir(){
    Nodo* aux = cabeza;
    printf("\n");
    while(!(aux==nullptr)){
        printf("%d", aux->get_valor());
        aux = aux->get_siguiente();
        printf("\t", 4);
    }
    printf("\n");
}

ListaSimple::~ListaSimple()
{
    //dtor
}
