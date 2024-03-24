/***********************************************************************
 * Module:  main.cpp
 * Author:  JoseSanMartin,Ruben Benavides
 * Modified: martes, 22 de noviembre de 2023 06:45:04 p. m.
 * Purpose: Declarar el main de una Funcion SobreCargada
 ***********************************************************************/
 /**
* @author JoseSanmartin
*/
#include <iostream>
#include "SobreCarga.h"

int main() {
    float a, b;
    system("cls");

    cout << "Ingrese un valor: ";
    cin >> a;
    cout << "Ingrese otro valor: ";
    cin >> b;

    Clase<float> objeto1(a);
    Clase<float> objeto2(b);

    Clase<float> resultado = objeto1 / objeto2;
    resultado.mostrarResultado();
    

    return 0;
}