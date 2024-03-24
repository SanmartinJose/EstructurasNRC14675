/***********************************************************************
 * Module:  main.cpp
 * Author:  JoseSanMartin
 * Modified: martes, 22 de noviembre de 2023 07:00:04 p. m.
 * Purpose: Declarar el main de una Funcion SobreCargada
 ***********************************************************************/
#include <iostream>
#include "Operaciones.h"

int main() {
    Operaciones<int> opInt;
    int x = 5, y = 10;
    std::cout << "Multiplicación de enteros: " << opInt.multiplicar(x, y) << std::endl;

    Operaciones<float> opFloat;
    float m = 3.5f, n = 2.7f;
    std::cout << "Multiplicación de flotantes: " << opFloat.multiplicar(m, n) << std::endl;

    return 0;
}