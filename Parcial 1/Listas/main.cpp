#include <iostream>
#include "ListaSimple.h"

int main() {
    ListaSimple lista;
    int opcion, numero;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. Insertar al inicio\n";
        std::cout << "2. Insertar al final\n";
        std::cout << "3. Imprimir desde el inicio\n";
        std::cout << "4. Imprimir desde el final\n";
        std::cout << "5. Sumar números pares\n";
        std::cout << "6. Salir\n";
        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese un número para insertar al inicio: ";
                std::cin >> numero;
                lista.insertarAlInicio(numero);
                break;
            case 2:
                std::cout << "Ingrese un número para insertar al final: ";
                std::cin >> numero;
                lista.insertarAlFinal(numero);
                break;
            case 3:
                lista.imprimirDesdeInicio();
                lista.
                break;
            case 4:
                lista.imprimirDesdeFinal();
                break;
            case 5:
                std::cout << "La suma de los números pares es: " << lista.sumarPares() << std::endl;
                break;
            case 6:
                std::cout << "Saliendo del programa. ¡Hasta luego!\n";
                break;
            default:
                std::cout << "Opcion no válida. Por favor, ingrese un número del 1 al 6.\n";
        }
    } while (opcion != 6);

    return 0;
}