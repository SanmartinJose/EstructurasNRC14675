#ifndef PEON_H
#define PEON_H

#include <fstream>
#include <string>

#define DIMENSION 8

class Peon {
private:
    int fila;
    int columna;
    char tablero[DIMENSION][DIMENSION];
    std::ofstream archivo;
    int contador;
    int n;

    void encerarTablero();
    void crearArchivo();
    void mostrar();
    void solucion(int x, int y, int n1);

public:
    Peon(int n1, int filaInicial, int columnaInicial);
    Peon(int filaInicial, int columnaInicial);
    void solucionPeones();
    bool puedenAtacarse(const Peon& otro);
    void mostrarEnConsola();
};

#endif // PEON_H

