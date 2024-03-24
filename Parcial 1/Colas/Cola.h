#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include <iostream>
#include "Nodo.h"

class Cola{
private:
    Nodo* cabeza;
    Nodo* cola;
public:
    Cola();
    Nodo* getCabeza();
    void setCabeza(Nodo*);
    Nodo* getCola();
    void setCola(Nodo*);
    void insertar(int valor);
    void eliminar();
    void imprimir();
    bool estaVacia();
    Nodo* extraer_cabeza();
    void dejar_pares(Cola*);
    void sumarPosPares(Nodo*);
    void encontrarValor(int dato);
};

#endif // COLA_H_INCLUDED
