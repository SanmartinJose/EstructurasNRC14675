#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include "Nodo.h"

class ListaSimple
{
    public:
        void insertar_cabeza(int);
        void insertar_cola(int);
        void insertar_entre(int);
        void imprimir_desde_la_cabeza();
        void imprimir_desde_la_cola();
        void imprimir_desde_la_cola_recursiva(Nodo*);
        bool buscar(int);
        void eliminar_por_la_cabeza();
        void eliminar_por_la_cola();
        void lista_vacia();
        void sumarLista();
        void sumarPares();        
        ListaSimple();
        ~ListaSimple();
    protected:

    private:
        Nodo* cabeza;
};

#endif // LISTASIMPLE_H
