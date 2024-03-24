/*************************
 * Module:  EjerciciosLambda.cpp
 * Author:  Jose Sanmartin
 * Modified: lunes, 19 de noviembre de 2023 22:40:40
 * Purpose: Ejercicios de Lambda
 *************************/
#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int main()

{
    constexpr double PI = 3.14159;
    double radio;
    //Lambda para multiplicacion 
    auto multiplicacion = [](int multiplicador, int multiplicando)
    {
        return multiplicador * multiplicando;
    };
     //Lambda para division
    auto division = [](int divisor, int dividendo)
    {
        return divisor / dividendo;
    };
     //Lambda para resta
    auto resta = [](int minuendo, int sustraendo)
    {
        return minuendo - sustraendo;
    };
     //Lambda para validar que una cadena tenga solo 10 caracteres
    auto validarLongitud = [](const string &cadena) -> bool
    {
        return cadena.size() == 10;
    };
     //Lambda para sumar dos numeros
    auto suma = [](const int &suma1, const int &suma2) -> int
    {
        return suma1 + suma2;
    };
     //Lambda para validar que una cadena solo tiene letras 
    auto validarLetras = [](const string &cadenaLetras) -> bool
    {
        return all_of(cadenaLetras.begin(), cadenaLetras.end(), [](char c)
                      { return (isalpha(c) || c == 'ñ' || c == 'Ñ'); });
    };
    //Lambda para identificar el MCD de dos numeros 
    struct NumeroDivisible
    {
        int operator()(int a, int b) const
        {
            while (b != 0)
            {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }
    };
    auto numerosDivisible = NumeroDivisible();
    //Lambda de area de circulo
    auto areaCirculo = [&pi = PI](double radio) {
        return pi * radio * radio;
    };
    // Función lambda con captura por valor por defecto y referencia
    auto areaCirculo2 = [=, &pi = PI](double radio) {
        return pi * radio * radio;
    };


    //resultados
    int numero1 = 24;
    int numero2 = 36;
    int resultadoMCD = numerosDivisible(numero1, numero2);
    int resultadoSuma = suma(2, 3);
    string cadena1 = "1234567890";
    string cadena2 = "JoseSanmartinEsMiNombre";
    int resulDivision = division(20, 5);
    int resultado = multiplicacion(5, 10);
    int resultadoResta = resta(5, 10);
    radio =2.0;
    cout << "El resultado de la multiplicacion es: " << resultado << endl;
    cout << "El resultado de la division es: " << resulDivision << endl;
    cout << "El resultado de la division es: " << resultadoResta << endl;
    cout << "La cadena1 tiene longitud 10: " << boolalpha << validarLongitud(cadena1) << endl;
    cout << "El resultado de la suma es: " << resultadoSuma << endl;
    cout << "La cadena1 tiene solo letras?: " << boolalpha << validarLetras(cadena2) << endl;
    cout << "El MCD de " << numero1 << " y " << numero2 << " es: " << resultadoMCD << endl;
    cout << "EL area del circulo es: " << areaCirculo(radio) << endl;
    cout << "El area del cirulo es (Ejemplo2): " << areaCirculo2(radio) << endl;
    return 0;
}