/***********************************************************************
 * Module:  main.cpp
 * Author:  JoseSanMartin
 * Modified: martes, 22 de noviembre de 2023 06:45:04 p. m.
 * Purpose: Declarar el main de una Funcion SobreCargada
 ***********************************************************************/
#include <iostream>
#include <windows.h>

typedef int (*PotenciaCuadrado)(float);

int main() {
    HINSTANCE hinstLib = LoadLibrary(TEXT("MiPrimerDll.dll"));
    if (hinstLib == NULL) {
        std::cout << "No se pudo cargar la librería." << std::endl;
        return 1;
    }

    PotenciaCuadrado potenciaCuadrado = (PotenciaCuadrado)GetProcAddress(hinstLib, "PotenciaCuadrado");
    if (potenciaCuadrado == NULL) {
        std::cout << "No se pudo encontrar la función." << std::endl;
        FreeLibrary(hinstLib);
        return 1;
    }

    float num = 4.0f; // Cambiado a float para reflejar el tipo de dato en la función DLL
    int resultado = potenciaCuadrado(num);
    std::cout << "El cuadrado de " << num << " es " << resultado << std::endl;

    FreeLibrary(hinstLib);
    return 0;
}
