#ifndef LISTASDOBLES_H_INCLUDED
#define LISTASDOBLES_H_INCLUDED
#include "Nodo.h"

class ListasDobles{
private:
    Nodo* nodoCabeza;
    Nodo* nodoCola;
    int nNodos;
public:
    ListasDobles();
    void insertarPorCabeza(int valor);
    void insertarPorCola(int valor);
    void insertarEntre(int valor, int posicion);
    void cambiarPosicion();
    void imprimirListaPorCabeza();
};

#endif // LISTASDOBLES_H_INCLUDED
