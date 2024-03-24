#include "IngresoDatos.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string>

// Definición de la función para ingresar un número entero.
int IngresoDatos::IngresarDatosEntero()
{
    // Se pide al usuario que ingrese el número de piezas.
    std::cout << "Ingrese el numero de piezas por favor" << std::endl;

    // Se crea un array de caracteres para almacenar los dígitos ingresados.
    char *dato = new char[10], c;

    // Variables de control para la iteración y la cantidad de caracteres ingresados.
    int i = 0, n = 0;

    // Bucle para la entrada de datos.
    while ((c = _getch()) != 13) { // 13 es el código ASCII para la tecla Enter.

        // Si el carácter ingresado es un dígito entre '1' y '8' y aún no se han ingresado dos dígitos.
        if (c >= '1' && c <= '8' && n <= 1) {
            printf("%c", c);
            dato[i++] = c;
            n++;
        }
        // Si el carácter ingresado es la tecla de retroceso (Backspace).
        else if (c == 8 || c == 127) {
            // Se borra el último carácter visualmente.
            printf("\b \b");
            // Se decrementa el índice y se elimina el último dígito ingresado.
            dato[i--] = 0;
            // Se decrementa el contador de caracteres ingresados.
            n--;
        }
    }

    // Se agrega el carácter nulo al final del array de caracteres.
    dato[i] = '\0';

    // Convierte la cadena de caracteres a un entero y lo retorna.
    return atoi(dato);
}
