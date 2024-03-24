#include <iostream>
#include "Nodo.h"

class ListaSimple{
	public:
		Nodo* cabeza;
	private:
		void insertarCabeza(int);
		void imprimir();
		ListaSimple();
		~ListaSimple();
};