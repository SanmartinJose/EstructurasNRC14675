#include "Reina.h"
#include "IngresoDatos.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Tablero.h"
#include "Rey.h"
using namespace std;

int main() {
    // Declaración de variables
    int opcion;
    Rey rey;

    // Menú principal
    do {
        std::cout << "Menú:" << std::endl;
        std::cout << "1. Movimientos Rey" << std::endl;
        std::cout << "2. Movimientos Reina" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "Ingrese su opcion: ";

        // Leer la opción del usuario
        std::cin >> opcion;

        // Switch para manejar las opciones del menú
        switch (opcion) {
            case 1: {
                rey.inicializarRey();
                break;
            }
             case 2: {
                int nu;
                IngresoDatos in;
                nu = in.IngresarDatosEntero();
                std::cout << '\n';
                Reina *obj = new Reina(nu);
                obj->solucionReinas();
                obj->mostrarEnConsola();
                std::cout << "\nSe creó el archivo txt" << std::endl;
                system("pause");

                ifstream file("Tablero.txt");
                Tablero t;
                int dimension;
                cout << "Ingrese la dimensión de la matriz: ";
                cin >> dimension;
                int **matriz = new int*[dimension];
                for (int i = 0; i < dimension; i++) {
                    matriz[i] = new int[dimension];
                }

                t.leerMatriz(file, dimension, matriz);
                file.close();
                t.dibujarMatriz(dimension, matriz);

                for (int i = 0; i < dimension; i++) {
                    delete[] matriz[i];
                }
                delete[] matriz;
                break;
            }
            case 3:
                // Mensaje de salida al elegir la opción "Salir"
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                // Mensaje de error para opciones no válidas
                std::cout << "Opcion no valida. Por favor, elija nuevamente." << std::endl;
        }

    } while (opcion != 2);  // Salir del bucle si la opción es "Salir"

    return 0;
}
