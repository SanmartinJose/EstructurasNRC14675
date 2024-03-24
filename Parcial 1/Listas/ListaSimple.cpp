#include "ListaSimple.h"
#include <iostream>

//Realizamos el constructor de la clase ListaSimple y declaramos las variables necesarias 
ListaSimple::ListaSimple(){
    //Agregamos el nullptr el cual nos permitira analizar si es un nodo nulo 
    cabeza = nullptr;
    //Agregamos el nullptr el cual nos permitiria analizar si es es un nodo nulo
    cola=nullptr;
}
void ListaSimple::insertarAlInicio(int valor){
    //Creamos un nuevo Nod que sera nuestro punto de enlace entre funciones
    Nodo* nuevoNodo = new Nodo();
    //Llamamos y asignamos el parametro valor a un dato
    nuevoNodo->dato=valor;
    //Llamamos y asignamos el parametro valor a un dato
    nuevoNodo->siguiente=cabeza;
    //Mientras cabeza sea igual a nulo
    if(cabeza==nullptr){
        //el nuevo nodo se le asignara a la cola
        cola=nuevoNodo;
        //el nuevo nodo es el valor agregado
    }else{cabeza=nuevoNodo;}
    
}
void ListaSimple::insertarAlFinal(int valor){
    Nodo* nuevoNodo=new Nodo();
    nuevoNodo->dato=valor;
    nuevoNodo->siguiente=cola;
    if(cola==nullptr){
        cabeza=nuevoNodo;
    }else{
        cola->siguiente = nuevoNodo;
    }
    cola=nuevoNodo;
}
void ListaSimple::imprimirDesdeInicio(){
    Nodo* temp = cabeza;
    printf("Elementos desde la cabezas: ");
    while (temp != nullptr) {
        if (temp->siguiente == nullptr) {
            printf("%d ", temp->dato);
        }
        temp = temp->siguiente;
    }
    printf("\n");
}
void ListaSimple::imprimirDesdeFinal(){
    Nodo* temp=cabeza;
    printf("Elementos desde la cola: ");
    while(temp != nullptr) {
        printf("%d ", temp->dato);
        temp = temp->siguiente;
    }
    printf("\n");
}


int ListaSimple::sumarPares(){
    Nodo* temp = cabeza;
    int suma = 0;
    while (temp != nullptr) {
        if (temp->dato % 2 == 0) {
            suma += temp->dato;
        }
        temp = temp->siguiente;
    }
    return suma;
}