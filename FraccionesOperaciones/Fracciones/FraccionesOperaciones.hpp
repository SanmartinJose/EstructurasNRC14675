#include <iostream>
#include "restricciones.hpp"
/**
 * @brief Permite encontrar el Minimo Comun Multipo de una fraccion esto permitara simplificar la respuesta
 *
 * @param num1 Primer Valor a buscar  el MCD
 * @param num2 Segundo Valor a buscar  el MCD
 *
 * @return El MCD de los numeros 
 */
using namespace std;
int MCD(int num1, int num2)
{
    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}
/**
 * @brief Permite Realizar Suma de fracciones
 *
 * @param numerador Primer Valor de un denominador a Operar
 * @param denominador Primer denominador a Operar
 * @param numerador2 Segundo Valor de un denominador a Operar
 * @param denominador2 Segundo denominador a Operar
 *
 *
 */
int suma(int numerador, int denominador, int numerador2, int denominador2)
{
    int numeradorParcial, numeradorParcial2, totalNumerador, totalDenominador;
    int numeradorSimplificado, denominadorSimplificado;

    numeradorParcial = numerador * denominador2;
    numeradorParcial2 = numerador2 * denominador;
    totalNumerador = numeradorParcial + numeradorParcial2;
    totalDenominador = denominador * denominador2;
    int mcd = MCD(totalNumerador, totalDenominador);
    numeradorSimplificado = totalNumerador / mcd;
    denominadorSimplificado = totalDenominador / mcd;

    if (denominadorSimplificado == 1)
    {
        cout << "Los valores ingresados son: " << numerador << "/" << denominador << " + " << numerador2 << "/" << denominador2 << endl;
        cout << "El resultado es: " << numeradorSimplificado << endl;
    }
    else if (totalNumerador < 0)
    {
        cout << "Los valores ingresados son: " << numerador << "/" << denominador << " + " << numerador2 << "/" << denominador2 << endl;
        cout << "El resultado es: " << numeradorSimplificado * -1 << "/" << denominadorSimplificado * -1 << endl;
    }
    else
    {
        cout << "Los valores ingresados son: " << numerador << "/" << denominador << " + " << numerador2 << "/" << denominador2 << endl;
        cout << "El resultado es: " << numeradorSimplificado << "/" << denominadorSimplificado << endl;
    }

    return 0;
}
/**
 * @brief Permite Realizar La resta  de fracciones
 *
 * @param numerador Primer Valor de un denominador a Operar
 * @param denominador Primer denominador a Operar
 * @param numerador2 Segundo Valor de un denominador a Operar
 * @param denominador2 Segundo denominador a Operar
 *
 *
 */
int resta(int numerador, int denominador, int numerador2, int denominador2)
{
    int numeradorParcial, numeradorParcial2, totalNumerador, totalDenominador;
    int numeradorSimplificado, denominadorSimplificado;

    numeradorParcial = numerador * denominador2;
    numeradorParcial2 = numerador2 * denominador;
    totalNumerador = numeradorParcial - numeradorParcial2;
    totalDenominador = denominador * denominador2;
    int mcd = MCD(totalNumerador, totalDenominador);
    numeradorSimplificado = totalNumerador / mcd;
    denominadorSimplificado = totalDenominador / mcd;

    if (denominadorSimplificado == 1)
    {
        cout << "Los valores ingresados son: " << numerador << "/" << denominador << " - " << numerador2 << "/" << denominador2 << endl;
        cout << "El resultado es: " << numeradorSimplificado << endl;
    }
    else if (totalNumerador < 0)
    {
        cout << "Los valores ingresados son: " << numerador << "/" << denominador << " - " << numerador2 << "/" << denominador2 << endl;
        cout << "El resultado es: " << numeradorSimplificado * -1 << "/" << denominadorSimplificado * -1 << endl;
    }
    else
    {
        cout << "Los valores ingresados son: " << numerador << "/" << denominador << " - " << numerador2 << "/" << denominador2 << endl;
        cout << "El resultado es: " << numeradorSimplificado << "/" << denominadorSimplificado << endl;
    }

    return 0;
}
/**
 * @brief Permite Realizar Producto de Fracciones
 *
 * @param numerador Primer Valor de un denominador a Operar
 * @param denominador Primer denominador a Operar
 * @param numerador2 Segundo Valor de un denominador a Operar
 * @param denominador2 Segundo denominador a Operar
 *
 *
 */
int producto(int numerador, int denominador, int numerador2, int denominador2)
{
    int totalNumerador, totalDenominador, numeradorSimplificado, denominadorSimplificado;

    totalNumerador = numerador * numerador2;
    totalDenominador = denominador * denominador2;
    int mcd = MCD(totalNumerador, totalDenominador);
    numeradorSimplificado = totalNumerador / mcd;
    denominadorSimplificado = totalDenominador / mcd;

    if (denominadorSimplificado == 1)
    {
        cout << "Los valores ingresados son: " << numerador << "/" << denominador << " x " << numerador2 << "/" << denominador2 << endl;
        cout << "El resultado es: " << numeradorSimplificado << endl;
    }
    else if (totalNumerador < 0)
    {
        cout << "Los valores ingresados son: " << numerador << "/" << denominador << " x " << numerador2 << "/" << denominador2 << endl;
        cout << "El resultado es: " << numeradorSimplificado * -1 << "/" << denominadorSimplificado * -1 << endl;
    }
    else
    {
        cout << "Los valores ingresados son: " << numerador << "/" << denominador << " x " << numerador2 << "/" << denominador2 << endl;
        cout << "El resultado es: " << numeradorSimplificado << "/" << denominadorSimplificado << endl;
    }

    return 0;
}
/**
 * @brief Permite Realizar la division de fracciones
 *
 * @param numerador Primer Valor de un denominador a Operar
 * @param denominador Primer denominador a Operar
 * @param numerador2 Segundo Valor de un denominador a Operar
 * @param denominador2 Segundo denominador a Operar
 *
 *
 */
int division(int numerador, int denominador, int numerador2, int denominador2)
{
    int totalNumerador, totalDenominador;
    int numeradorSimplificado, denominadorSimplificado;

    totalNumerador = numerador * denominador2;
    totalDenominador = denominador * numerador2;
    int mcd = MCD(totalNumerador, totalDenominador);
    numeradorSimplificado = totalNumerador / mcd;
    denominadorSimplificado = totalDenominador / mcd;

    if (denominadorSimplificado == 1)
    {
        cout << "Los valores ingresados son: " << numerador << "/" << denominador << " ÷ " << numerador2 << "/" << denominador2 << endl;
        cout << "El resultado es: " << numeradorSimplificado << endl;
    }
    else if (totalNumerador < 0)
    {
        cout << "Los valores ingresados son: " << numerador << "/" << denominador << " ÷ " << numerador2 << "/" << denominador2 << endl;
        cout << "El resultado es: " << numeradorSimplificado * -1 << "/" << denominadorSimplificado * -1 << endl;
    }
    else
    {
        cout << "Los valores ingresados son: " << numerador << "/" << denominador << " ÷ " << numerador2 << "/" << denominador2 << endl;
        cout << "El resultado es: " << numeradorSimplificado << "/" << denominadorSimplificado << endl;
    }

    return 0;
}

void opcionSumar()
{
    cout << "Ha seleccionado Calculador de Sumas.\n";
    do
    {
        int numerador = obtenerNumero();
        int denominador = diferenteDeCero();
        int numerador2 = obtenerNumero();
        int denominador2 = diferenteDeCero();
        suma(numerador, denominador, numerador2, denominador2);

        char opcion;
        cout << "¿Desea realizar otra suma? (S/N): ";
        cin >> opcion;

        if (opcion != 'S' && opcion != 's')
        {
            break; 
        }
    } while (true); 
}

void opcionRestar()
{
    cout << "Ha seleccionado la Calculador de Restas.\n";
    int numerador = obtenerNumero();
    int denominador = diferenteDeCero();
    int numerador2 = obtenerNumero();
    int denominador2 = diferenteDeCero();
    resta(numerador, denominador, numerador2, denominador2);
    
}

void opcionProducto()
{
    cout << "Ha seleccionado la Opción Producto.\n";
    int numerador = obtenerNumero();
    int denominador = diferenteDeCero();
    int numerador2 = obtenerNumero();
    int denominador2 = diferenteDeCero();
    producto(numerador, denominador, numerador2, denominador2);
}

void opcionResiduo()
{
    cout << "Ha seleccionado la Opción 4.\n";
    int numerador = obtenerNumero();
    int denominador = diferenteDeCero();
    int numerador2 = obtenerNumero();
    int denominador2 = diferenteDeCero();
    division(numerador, denominador, numerador2, denominador2);
}

void opcion5()
{
    cout << "Ha seleccionado la Opción 5. Saliendo del programa.\n";
}

// Función para mostrar el menú y obtener la opción seleccionada
int mostrarMenu()
{
    int opcion;

    cout << "Menu:\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion 3\n";
    cout << "4. Division\n";
    cout << "5. Salir\n";
    cout << "Seleccione una opción: ";

    while (!(cin >> opcion) || opcion < 1 || opcion > 5)
    {
        cout << "Entrada inválida. Ingrese una opción válida (1-5): ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (opcion == 1)
    {
        opcionSumar();
    }
    else if (opcion == 2)
    {
        opcionRestar();
    }
    else if (opcion == 3)
    {
        opcionProducto();
    }
    else if (opcion == 4)
    {
        opcionResiduo();
    }
    else if (opcion == 5)
    {
        cout << "Hasta la proxima ";
    }
    return opcion;
}