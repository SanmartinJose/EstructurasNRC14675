#include <iostream>
#include "ListasDobles.h"

ListasDobles::ListasDobles(){
    nodoCabeza = nullptr;
    nodoCola = nullptr;
    nNodos = 0;
}

void ListasDobles::insertarPorCabeza(int valor){
    Nodo* nuevoNodo = new Nodo(valor, nullptr, nullptr, 0);
    nNodos++;
    if(nodoCabeza == nullptr){
        nodoCabeza = nuevoNodo;
    }else{
        nuevoNodo->setNodoSiguiente(nodoCabeza);
        nodoCabeza->setNodoPrevio(nuevoNodo);
        nodoCabeza = nuevoNodo;
        Nodo* auxiliar = nodoCabeza->getNodoSiguiente();
        while(auxiliar != nullptr){

            auxiliar->setPosicion(auxiliar->getPosicion()+1);
            auxiliar = auxiliar->getNodoSiguiente();
        }
    }
    nodoCola = nodoCabeza;
    while(nodoCola->getNodoSiguiente() != nullptr){
        nodoCola = nodoCola->getNodoSiguiente();
    }
}

void ListasDobles::insertarPorCola(int valor){
    nNodos++;
    Nodo* nuevoNodo = new Nodo(valor, nullptr, nullptr, nNodos-1);
    if(nodoCola == nullptr){
        nodoCola = nuevoNodo;
        nodoCabeza = nuevoNodo;
    }else{
        nodoCola->setNodoSiguiente(nuevoNodo);
        nuevoNodo->setNodoPrevio(nodoCola);
        nodoCola = nuevoNodo;
    }
}

// Función para insertar un nodo en una posición específica de la lista doblemente enlazada
void ListasDobles::insertarEntre(int valor, int posicion){
    // Verifica si la lista tiene al menos dos nodos para permitir la inserción entre ellos
    if(nodoCabeza->getNodoSiguiente() != nullptr){
        // Crea un nuevo nodo con el valor dado
        Nodo* nuevoNodo = new Nodo(valor, nullptr, nullptr, 0);
        // Incrementa el contador de nodos
        nNodos++;
        
        // Inicializa un nodo auxiliar para recorrer la lista
        Nodo* auxiliar = nodoCabeza;
        bool seEncontroPos = false; // Variable para controlar si se encontró la posición
        
        // Recorre la lista en busca de la posición deseada
        while(auxiliar != nullptr){
            if(auxiliar->getPosicion() == posicion){ // Si se encuentra la posición
                if(auxiliar->getNodoSiguiente() == nullptr){ // Si la posición es la última
                    seEncontroPos = true;
                    // Inserta el nodo por la cola de la lista
                    insertarPorCola(valor);
                    printf("Nodo insertado exitosamente.\n");
                    break;
                }else{ // Si la posición no es la última
                    seEncontroPos = true;
                    Nodo* auxiliar2 = auxiliar->getNodoSiguiente();
                    // Se ajustan los punteros para insertar el nuevo nodo entre dos nodos existentes
                    auxiliar->setNodoSiguiente(nuevoNodo);
                    nuevoNodo->setNodoPrevio(auxiliar);
                    nuevoNodo->setNodoSiguiente(auxiliar2);
                    nuevoNodo->setPosicion(auxiliar2->getPosicion());
                    auxiliar2->setNodoPrevio(nuevoNodo);
                    
                    // Se actualizan las posiciones de los nodos posteriores al nuevo nodo insertado
                    while(auxiliar2 != nullptr){
                        auxiliar2->setPosicion(auxiliar2->getPosicion()+1);
                        auxiliar2 = auxiliar2->getNodoSiguiente();
                    }
                    printf("Nodo insertado exitosamente.\n");
                    break;
                }
            }
            auxiliar = auxiliar->getNodoSiguiente();
        }
        
        // Si no se encontró la posición, se muestra un mensaje de error
        if(seEncontroPos == false){
            printf("No se halló la posición %d.\n",posicion);
        }
    }else{
        // Si la lista tiene menos de dos nodos, no se puede insertar entre ellos
        printf("No se puede insertar en medio, dado que solo existe un nodo, o ninguno en la lista.\n");
    }
}

void ListasDobles::cambiarPosicion(){
Nodo* aux = nodoCabeza;
Nodo* aux1=nodoCola;
	while (aux != nullptr) {
		
        printf("%d, pos=%d", aux->getDato(), aux1->getDato());
		aux = aux->getNodoSiguiente();
		printf("\t", 2);
	}
	printf("\n");
}

void ListasDobles::imprimirListaPorCabeza(){
    Nodo* aux = nodoCabeza;
    int pos =0;
	while (aux != nullptr){ 
		printf("%d, pos=%d", aux->getDato(), aux->getPosicion());

		aux = aux->getNodoSiguiente();
		printf("\t", 2);
	}
	printf("\n");
}

