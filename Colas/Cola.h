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
    int sumaDeCola();
    void retornarColaPar(Cola* cola_par);
    void generarTabla();
    void imprimirTabla();
    int maximo(int num1, int num2);
};

#endif // COLA_H_INCLUDED
