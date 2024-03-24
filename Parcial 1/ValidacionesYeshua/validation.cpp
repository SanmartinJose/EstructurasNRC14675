#include "validation.h"
#include <iostream>

using namespace std;

char* Validation::ingresoEntero(char* msj) {
    char* datos = new char[10];
    char c;
    int i = 0;

    system("cls");  // Utiliza "clear" para sistemas Unix/Linux

    cout << msj << endl;

    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            printf("%c", c);

            datos[i++] = c;
        }
    }

    datos[i] = '\0';
    return datos;
}

char* Validation::ingresoDecimal(char* msj) {
    char* datos = new char[10];
    char d;
    int i = 0;
    bool pointDecimal;

    system("cls");  // Utiliza "clear" para sistemas Unix/Linux

    cout << msj << endl;

    while ((d = getch()) != 13 && i < 9) {
        if ((d >= '0' && d <= '9') || (d == '.' && !pointDecimal)) {
            if (d == '.')
            {
                pointDecimal = true;
            }
            
            printf("%c", d);
            datos[i++] = d;
        }
    }

    datos[i] = '\0';
    return datos;
}

char* Validation::ingresoAlfanumerico(char* msj){
    char datos[10];
    char a;
    int i=0;

    system("cls");

    cout << msj << endl;
    while ((a = getchar()) != 13 && i < 9) {
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || a == 'ñ' || a == 'Ñ' || a == 32 || a == 8) {
            if (a == 8 && i > 0) {
                std::cout << "\b \b";  // Retrocede un carácter en la pantalla
                i--;
            } else if (a != 8) {
                std::cout << a;
                datos[i++] = a;
            }
        }
    }
    datos[i] = '\0';
    return datos;
}
