#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

int ingresar_doublesoentero(const char* msj) {
    std::string input;
    double number;
    bool esDecimal = false;

    while (true) {
        std::cout << msj;
        std::getline(std::cin, input);

        // Verificar si la cadena está vacía
        if (input.empty()) {
            std::cout << "Debe ingresar un valor." << std::endl;
            continue;
        }

        // Verificar cada carácter de la entrada
        bool esNumero = true;
        bool seEncontroPunto = false;

        for (char c : input) {
            if (!std::isdigit(c) && c != '.') {
                esNumero = false;
                break;
            }

            if (c == '.') {
                if (seEncontroPunto || esDecimal) {
                    esNumero = false;
                    break;
                }
                seEncontroPunto = true;
            }
        }

        if (!esNumero) {
            std::cout << "Debe ingresar un número decimal o entero positivo válido." << std::endl;
            continue;
        }

        // Convertir la cadena a número
        std::istringstream iss(input);
        iss >> number;

        // Verificar si es un número válido
        if (iss.fail() || number < 0) {
            std::cout << "Debe ingresar un número decimal o entero positivo válido." << std::endl;
            continue;
        }

        break;
    }

    return static_cast<int>(number);
}