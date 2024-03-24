#include "Fraccion.h"

Fraccion::Fraccion(int num, int den)
{

}
int Fraccion::getNumerador(){
return numerador;
}
void Fraccion::setDenominador(int newDenominador){
	denominador= newDenominador;
}
int Fraccion::getDenominador(){
return denominador;
}
void Fraccion::setNumerador(int newNumerador){
	numerador= newNumerador;
}
Fraccion::~Fraccion(){
}
