#include <fstream>
#include <iostream>
using namespace std;

class Tablero {
public:
    void leerMatriz(ifstream &file, int dimension, int **matriz);
    void dibujarMatriz(int dimension, int **matriz);
    void escribirReina(std::string linea,int x,int y,int cant);
    void leerLinea(std::string linea,int x,int y);
    void dibujarReinas(int dimension, int size);
    bool estaEnDiagonalPrincipal(int fila, int columna);
};
