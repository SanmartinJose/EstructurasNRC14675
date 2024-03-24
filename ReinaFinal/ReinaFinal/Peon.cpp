#include "Peon.h"
#include <iostream>
#include <cmath>

#include "Peon.h"
#include <iostream>
#include <cmath>

Peon::Peon(int n1, int filaInicial, int columnaInicial) {
    n = n1;
    fila = filaInicial;
    columna = columnaInicial;
    encerarTablero();
    crearArchivo();
}

Peon::Peon(int filaInicial, int columnaInicial) {
    fila = filaInicial;
    columna = columnaInicial;
}


void Peon::encerarTablero() {
    for (int i = 0; i < DIMENSION; i++) {
        for (int j = 0; j < DIMENSION; j++) {
            tablero[i][j] = '*';
        }
    }
}

void Peon::crearArchivo() {
    archivo.open("exaustivo.txt", std::fstream::out);
    archivo << "solucion" << DIMENSION << "*" << DIMENSION << std::endl << std::endl;
    contador = 0;
}

void Peon::mostrar() {
    contador++;
    archivo << "solucion N " << contador << std::endl;
    for (int i = 0; i < DIMENSION; i++) {
        for (int j = 0; j < DIMENSION; j++) {
            archivo << tablero[i][j] << " ";
        }
        archivo << std::endl;
    }
    archivo << std::endl;
}

void Peon::solucion(int x, int y, int n1) {
    tablero[x][y] = 'P';
    if (n1 == n) {
        mostrar();
    } else {
        for (int i = x + 1; i < DIMENSION; i++) {
            for (int j = 0; j < DIMENSION; j++) {
                solucion(i, j, n1 + 1);
            }
        }
    }
    tablero[x][y] = '*'; // Deshacer el movimiento
}

void Peon::solucionPeones() {
    for (int i = 0; i < DIMENSION; i++) {
        for (int j = 0; j < DIMENSION; j++) {
            fila = i;
            columna = j;
            solucion(i, j, 1);
        }
    }
    archivo.close();
}

bool Peon::puedenAtacarse(const Peon& otro) {
    // Verificar si están separados por exactamente un espacio
    int diff_filas = std::abs(fila - otro.fila);
    int diff_columnas = std::abs(columna - otro.columna);
    return (diff_filas == 1 && diff_columnas == 1);
}


void Peon::mostrarEnConsola() {
    std::ifstream archivoResp;
    std::string texto;

    archivoResp.open("exaustivo.txt",std::ios::in);

    if(archivoResp.fail()) {
        std::cout << "No se encontró el archivo" << std::endl;
        exit(1);
    }
    while(!archivoResp.eof()) {
        getline(archivoResp,texto);
        std::cout << texto << std::endl;
    }

    archivoResp.close();
}

