/***********************************************************************
 * Module:  Fraction.h
 * Author:  Yeshua
 * Modified: Tuesday, November 14, 2023 7:19:53 PM
 * Purpose: Declaration of the class Fraction
 ***********************************************************************/

#include <iostream>
#include <windows.h>

typedef int (*RAIZ_NUMERO)(double);

int main()
{
    HINSTANCE hinstLib = LoadLibrary(TEXT("FirtsDLL.dll"));
    if (hinstLib == NULL)
    {
        std::cout << "No se pudo cargar la librería." << std::endl;
        return 1;
    }

    RAIZ_NUMERO raizNumero = (RAIZ_NUMERO)GetProcAddress(hinstLib, "raizNumero");
    if (raizNumero == NULL)
    {
        std::cout << "No se pudo encontrar la función." << std::endl;
        FreeLibrary(hinstLib);
        return 1;
    }

    double num = 16.0;
    int resultado = raizNumero(num);
    std::cout << "La raíz cuadrada de " << num << " es " << resultado << std::endl;

    FreeLibrary(hinstLib);
    return 0;
}
