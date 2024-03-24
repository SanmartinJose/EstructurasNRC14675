/***************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Joan Cobeña, Ruben Benavides, Edison Verdesoto
 * Fecha de creacion: 15/11/23 12:10
 * Fecha de modificacion:
 * Enunciado:
 * Operacion con fraccion
 *
 ***************************/
#include <iostream>
#include "Fraccion.h"
#include "OperacionesFraccion.h"

int main(){
    Fraccion obj1 = Fraccion(3,5);
    Fraccion obj2 = Fraccion(4,3);

    Fraccion suma = calculo(obj1, obj2);

    std::cout<<suma.getNumerador();
    std::cout<<"\n----\n";
    std::cout<<suma.getDenominador()<<"\n";

    system("pause");
    return 0;
}
