#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include "Cliente.h"
class Nodo{
private:
    int valor;

    Cliente cliente;
    Nodo* siguiente;

public:
    Nodo(int, Nodo*);
    Nodo* getSiguiente();
    void setSiguiente(Nodo*);
    int getValor(void);
    void setValor(int);
    Nodo(Cliente c, Nodo* siguiente);
    Cliente getCliente();
    void setCliente(Cliente);
    ~Nodo();
};



#endif // NODO_H_INCLUDED
