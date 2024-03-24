#include "IngresoDatos.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string>

// Definici�n de la funci�n para ingresar un n�mero entero.
int IngresoDatos::IngresarDatosEntero()
{
    // Se pide al usuario que ingrese el n�mero de piezas.
    std::cout << "Ingrese el numero de piezas por favor" << std::endl;

    // Se crea un array de caracteres para almacenar los d�gitos ingresados.
    char *dato = new char[10], c;

    // Variables de control para la iteraci�n y la cantidad de caracteres ingresados.
    int i = 0, n = 0;

    // Bucle para la entrada de datos.
    while ((c = _getch()) != 13) { // 13 es el c�digo ASCII para la tecla Enter.

        // Si el car�cter ingresado es un d�gito entre '1' y '8' y a�n no se han ingresado dos d�gitos.
        if (c >= '1' && c <= '8' && n <= 1) {
            printf("%c", c);
            dato[i++] = c;
            n++;
        }
        // Si el car�cter ingresado es la tecla de retroceso (Backspace).
        else if (c == 8 || c == 127) {
            // Se borra el �ltimo car�cter visualmente.
            printf("\b \b");
            // Se decrementa el �ndice y se elimina el �ltimo d�gito ingresado.
            dato[i--] = 0;
            // Se decrementa el contador de caracteres ingresados.
            n--;
        }
    }

    // Se agrega el car�cter nulo al final del array de caracteres.
    dato[i] = '\0';

    // Convierte la cadena de caracteres a un entero y lo retorna.
    return atoi(dato);
}
