#include <iostream>
using namespace std;
#include "Diccionario.cpp"
#include "validaciones.h"

int main() {
    Diccionario diccionario;

    diccionario.cargarDesdeArchivo("diccionario.txt");

    int opcion;
    std::string palabra, traduccion;

    do {
        diccionario.mostrarMenu();
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                palabra=ingresar_alfabetico("Que palabra desea buscar");
                printf("\n");
                diccionario.buscarPalabra(palabra);
                break;

            case 2:
                printf("\n");
                palabra=ingresar_alfabetico("Que palabra desea buscar");
                printf("\n");
                traduccion=ingresar_alfabetico("Ingrese la traduccion");
                printf("\n");
                diccionario.agregarPalabra(palabra, traduccion);
                break;

            case 3:
                diccionario.guardarEnArchivo("diccionario.txt");
                printf("\n");
                std::cout << "Guardado exitoso. Saliendo del programa." << std::endl;
                break;

            default:
                std::cout << "Opción no válida. Intente de nuevo." << std::endl;
        }

    } while (opcion != 3);

    return 0;
}
