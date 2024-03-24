#include "validar.h"
#include <cstdlib>

int main() {
    int valor = ingresar_doublesoentero("Ingrese un número decimal o entero positivo: ");
    std::cout << "El número ingresado es: " << valor << std::endl;
    system("pause");
    return 0;
}