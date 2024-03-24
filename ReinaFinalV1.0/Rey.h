#ifndef REY_H
#define REY_H

class Rey {
private:
    bool** validar;
    char** tablero;
    int n;

public:
    Rey(int n1);
    Rey();
    ~Rey();
    void vaciarTablero();
    void movimientosPosibles(int x, int y);
    void inicializarRey();
};

#endif // REY_H
