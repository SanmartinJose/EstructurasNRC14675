#include <iostream>
#include "Rey.h"

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
Rey::Rey(){

}
// Definición del constructor de la clase Rey
Rey::Rey(int n1) {
    n = n1;  // Se asigna el tamaño del tablero
    validar = new bool*[n];
    tablero = new char*[n];
    vaciarTablero();  // Se llama a la función para inicializar el tablero
}

// Definición del destructor de la clase Rey
Rey::~Rey() {
    // Se liberan los recursos asignados dinámicamente
    for (int i = 0; i < n; ++i) {
        delete[] validar[i];
        delete[] tablero[i];
    }
    delete[] validar;
    delete[] tablero;
}

// Inicializa el tablero con '*' y establece todas las posiciones como no visitadas
void Rey::vaciarTablero() {
    for (int i = 0; i < n; ++i) {
        validar[i] = new bool[n];
        tablero[i] = new char[n];
        for (int j = 0; j < n; ++j) {
            validar[i][j] = false;
            tablero[i][j] = '*';
        }
    }
}

// Calcula y muestra los movimientos posibles del rey desde la posición (x, y)
void Rey::movimientosPosibles(int x, int y) {
    vaciarTablero();  // Se limpia el tablero antes de calcular nuevos movimientos
    tablero[x][y] = 'R';  // Se marca la posición actual del rey

    // Definición de los movimientos posibles del rey en un tablero de ajedrez
    int movimientos[8][2] = {
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, -1},           {0, 1},
        {1, -1}, {1, 0}, {1, 1}
    };

    // Se itera sobre los movimientos posibles y se actualiza el tablero
    for (int i = 0; i < 8; ++i) {
        int nueva_x = x + movimientos[i][0];
        int nueva_y = y + movimientos[i][1];

        // Se verifica si la nueva posición está dentro del tablero
        if (nueva_x >= 0 && nueva_x < n && nueva_y >= 0 && nueva_y < n) {
            tablero[nueva_x][nueva_y] = 'r';  // Se marca la posición como posible movimiento
        }
    }

    // Se imprime el tablero con los movimientos posibles
    std::cout << "Tablero con movimientos posibles del rey:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << tablero[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void Rey::inicializarRey() {
    // Configuración del tablero y posición inicial del rey
    int n = 8;
    Rey rey(n);

    // Generar posición inicial aleatoria para el rey
    std::srand(std::time(nullptr));
    int pos_x = std::rand() % n;
    int pos_y = std::rand() % n;

    // Crear y abrir un archivo de texto para escribir los movimientos posibles
    std::ofstream archivo("movimientosRey.txt");

    // Verificar si el archivo se abrió correctamente
    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo." << std::endl;
        return;
    }

    // Mostrar la posición inicial del rey en la consola
    std::cout << "Posicion inicial del rey: (" << pos_x << ", " << pos_y << ")" << std::endl;

    // Calcular y escribir los movimientos posibles del rey en el archivo de texto
    rey.movimientosPosibles(pos_x, pos_y);

    // Escribir los movimientos posibles en el archivo de texto
    archivo << "Posicion inicial del rey: (" << pos_x << ", " << pos_y << ")" << std::endl;
    archivo << "Tablero con movimientos posibles del rey:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            archivo << rey.tablero[i][j] << " ";
        }
        archivo << std::endl;
    }

    // Cerrar el archivo
    archivo.close();

    // Informar en la consola que se ha guardado en el archivo
    std::cout << "Los movimientos posibles del rey se han guardado en 'movimientosRey.txt'" << std::endl;
}


