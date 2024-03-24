/***************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Ruben Benavides, Jose San Martin
 * Fecha de creacion: 21/11/23 22:31
 * Fecha de modificacion:
 * Enunciado: Implementacion de la clase Main
 ***************************/

 /**
* @author JoseSanmartin
*/
#include <iostream>
#include "Calculadora.cpp"

int main() {
    int a = 2;
    int b = 10;
    int c = 3;
    Calculadora<int> calc; // Usando el template con tipo int

    // Llamada al método sumar con dos números
    std::cout << "Suma de dos dígitos: " << calc.sumar(a, b) << std::endl;

    // Llamada al método sumar con tres números
    std::cout << "Suma de 3 dígitos: " << calc.sumar(a, b, c) << std::endl;

    return 0;
}