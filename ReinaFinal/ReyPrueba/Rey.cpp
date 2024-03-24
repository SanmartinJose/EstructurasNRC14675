
#include <iostream>
#include "Rey.h"

#include "Rey.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Rey::Rey(int n1) {
    n = n1;
    validar = new bool*[n];
    tablero = new char*[n];
    encerarTablero();
}

Rey::~Rey() {
    // Liberar la memoria asignada para validar y tablero
    for (int i = 0; i < n; ++i) {
        delete[] validar[i];
        delete[] tablero[i];
    }
    delete[] validar;
    delete[] tablero;
}

void Rey::encerarTablero() {
    for (int i = 0; i < n; ++i) {
        validar[i] = new bool[n];
        tablero[i] = new char[n];
        for (int j = 0; j < n; ++j) {
            validar[i][j] = false;
            tablero[i][j] = '*';
        }
    }
}

void Rey::imprimirMovimientosPosibles(int x, int y) {
    // Limpiamos el tablero y marcamos la posición del rey
    encerarTablero();
    tablero[x][y] = 'r';

    // Definimos los movimientos posibles del rey
    int movimientos[8][2] = {
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, -1},           {0, 1},
        {1, -1}, {1, 0}, {1, 1}
    };

    // Marcamos las casillas donde se puede mover el rey
    for (int i = 0; i < 8; ++i) {
        int new_x = x + movimientos[i][0];
        int new_y = y + movimientos[i][1];

        // Verificamos si la nueva posición está dentro del tablero
        if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < n) {
            tablero[new_x][new_y] = '+';
        }
    }

    // Imprimimos el tablero
    std::cout << "Tablero con movimientos posibles del rey:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << tablero[i][j] << " ";
        }
        std::cout << std::endl;
    }
}



