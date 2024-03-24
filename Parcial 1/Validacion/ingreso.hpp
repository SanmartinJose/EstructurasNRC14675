#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstdio>
using namespace std;

char *ingreso(char *);
char *ingreso(char *msj)
{
    char datos[10];
    char c;
    int i = 0;
    system("cls");
    cout << msj << endl;
    while ((c = getch()) != 13)
    {
        if (c >= '0' && c <= '9')
        {
            printf("%c", c);
            datos[i++] = c;
        }
    }
    datos[i] = '\0';
    return datos;
}