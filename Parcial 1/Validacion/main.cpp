#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstdio>
#include "ingreso.hpp"
using namespace std;


int main(int argc, char **argv)
{

    char datos[10];
    strcpy(datos, ingreso("Ingese el valor Numerico"));
    cout << "\n"
         << datos;

    return 0;
}