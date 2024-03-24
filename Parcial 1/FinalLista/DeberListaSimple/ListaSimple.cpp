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

void ListaSimple::insertar_cola(int valor) {
    Nodo* nodo_nuevo = new Nodo(valor, nullptr);
    if (cabeza == nullptr) {
        cabeza = nodo_nuevo;
    } else {
        Nodo* aux = cabeza;

        while (aux->get_siguiente() != nullptr) {
            aux = aux->get_siguiente();  
        }

        aux->set_siguiente(nodo_nuevo);
    }
}


void ListaSimple::imprimir_desde_la_cabeza(){
    Nodo* aux = cabeza;
    printf("\nImprimir desde la cabeza:\n");
    while(!(aux==nullptr)){
        printf("%d", aux->get_valor());
        aux = aux->get_siguiente();
        printf("\t", 4);
    }
    printf("\n");
}

void ListaSimple::imprimir_desde_la_cola(){
    printf("\nImprimir desde la cola:\n");
    imprimir_desde_la_cola_recursiva(cabeza);
    printf("\n");
}

void ListaSimple::imprimir_desde_la_cola_recursiva(Nodo* nodo_actual){
    if(nodo_actual==nullptr){
        return;
    }
    imprimir_desde_la_cola_recursiva(nodo_actual->get_siguiente());
    printf("%d\t",nodo_actual->get_valor());

}

bool ListaSimple::buscar(int valor_buscado) {
    Nodo* aux = cabeza;
    int posicion = 1;
    while (aux != nullptr) {
        if (aux->get_valor() == valor_buscado) {
            printf("El valor %d fue encontrado en la posicion %d\n", valor_buscado, posicion);
            return true;
        }
        aux = aux->get_siguiente();
        posicion++;
    }
    printf("El valor %d no se encontró en la lista.\n", valor_buscado);
    return false;
}

void ListaSimple::eliminar_por_la_cabeza(){
    lista_vacia();
    Nodo* elminar_nodo=cabeza;
    cabeza=cabeza->get_siguiente();
    delete elminar_nodo;
}

void ListaSimple::eliminar_por_la_cola(){
    lista_vacia();
    //mmm no se si sea necesario pero esto es si existe solo un elemento
    if(cabeza->get_siguiente()==nullptr){
        delete cabeza;
        cabeza=nullptr;
        return;
    }
    Nodo* aux = cabeza;
    while (aux->get_siguiente()->get_siguiente() != nullptr) {
        aux = aux->get_siguiente();
    }
    
    delete aux->get_siguiente();
    aux->set_siguiente(nullptr);

}

void ListaSimple::lista_vacia(){
    if(cabeza==nullptr){
        printf("La lista esta vacia no se puede borrar ningun elementos");
    }
}
void ListaSimple::sumarLista(){
    int suma=0;
    Nodo* actual=cabeza;
    while (actual != nullptr)
    {
        suma += actual->get_valor();
        actual=actual->get_siguiente();
    }
    printf("La suma es: %d\n", suma);    }
void ListaSimple::insertar_entre(int valor){
    
}


ListaSimple::~ListaSimple()
{
    //dtor
}
