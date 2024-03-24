#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include "Nodo.h"
/***********************************************************************
 * Module:  Cola.h
 * Author:  Jose Sanmartin
 * Modified: sabado, 2 de diciembre de 2023 10:05:38 a. m.
 * Purpose: Declaration of the class Cola
 ***********************************************************************/
class Cola
{
    public:
        Nodo* obtenerCabeza();
        void mete(int valor);
        void saca();
        Nodo* nodoInicio();
        int nodoFinal();
        void muestra();
        void dejarPares(Cola*);
        void dejarImpares(Cola*);
        void sumaPosicionesPares();
        void sumaPosicionesParesNodo(Nodo*);
        int CantidadElementos();
        void numeroDentro(int);
        void sacaNParesYSuma(Cola*);
        void sacaPrimeroEnLista();
        void ingresoSinRepetir(int dato);
        void sacaUltimoEnLista();
        int nodoMayor();
        void fibonacci(int);
        void elevaNVeces(int,Cola*);
        void mezcla(Cola c1, Cola c2);
        void limpiar();
        void factorial(Cola*);
        void factorialRecursivo(Cola*);
        Cola();
        ~Cola();
    protected:

    private:
        Nodo* inicioPtr;
        Nodo* finalPtr;
        bool estaVacia();
};



#endif // COLA_H_INCLUDED
