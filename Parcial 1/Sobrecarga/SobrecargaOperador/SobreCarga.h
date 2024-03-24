using namespace std;

template <typename T>
class Clase {
private:
    T valor;

public:
    Clase(T v) : valor(v) {}

    Clase operator/(const Clase &otro) {
        Clase resultado(valor / otro.valor);
        return resultado;
    }

    void mostrarResultado() {
        cout << "El resultado es: " << valor << endl;
    }
};