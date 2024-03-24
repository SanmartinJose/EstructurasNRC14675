#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include "Nodo.h"

class ListaSimple
{
    public:
        void insertar_cabeza(int);
        void imprimir();
        ListaSimple();
        ~ListaSimple();
    protected:

    private:
        Nodo* cabeza;
};

#endif // LISTASIMPLE_H
