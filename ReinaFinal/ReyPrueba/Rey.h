#ifndef REY_H
#define REY_H

class Rey {
private:
    bool** validar;
    char** tablero;
    int n;

public:
    Rey(int n1);
    ~Rey();
    void encerarTablero();
    void imprimirMovimientosPosibles(int x, int y);
};

#endif // REY_H
