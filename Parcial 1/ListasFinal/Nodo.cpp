#include "Nodo.h"

int Nodo::getValor(){
	return valor;
}
void Nodo::setValor(int newValor){
	valor = newValor;
}
Nodo* Nodo::getSiguiente(){
	return siguiente;
}
void Nodo::setSiguiente(Nodo* newSiguiente){
	siguiente = newSiguiente;
}
Nodo::Nodo(){

}
Nodo::Nodo(int _valor,Nodo* _siguiente){
    valor = _valor;
    siguiente = _siguiente;

}
Nodo::~Nodo(){

}