#include "validation.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int arg, char** argv) {
    Validation v;
    int option;
    
    system("cls");
    cout << "Opciones: " << endl <<"1. Entero" << endl << "2. Decimal" << endl << "3. Alfanumerico" << endl;
    cout << "Opcion: ";
    cin >> option;

    switch (option)
    {
    case 1:{
        char* datos = v.ingresoEntero("Ingrese el valor numerico entero: ");
        int valorInt = atoi(datos);  // Convierte el string a entero usando atoi
        cout << endl << "Valor ingresado: " << valorInt << endl;
        delete[] datos;// Liberar la memoria asignada con new
        
        break;
    }
    case 2:{
        char* datos2 = v.ingresoDecimal("Ingrese el valor numerico double: ");
        double valorDouble = atof(datos2);
        cout << endl << "Valor ingresado: " << valorDouble << endl;
        delete[] datos2;// Liberar la memoria asignada con new
        
        break;
    }
    case 3:{
        char* datos3 = v.ingresoAlfanumerico("Ingrese el valor alfanumerico: ");
        string valorAlfa = datos3;
        cout << endl << "Valor ingresado: " << valorAlfa << endl;
        delete[] datos3;// Liberar la memoria asignada con new
        
        break;
    }
    default:
        cout << "no valido";
        break;
    } 
    return 0;
}