#include <iostream>
#include "ListaSimple.cpp"
#include "validaciones.h"

int main()
{
    int opcion, dato;
    ListaSimple listas;

    do{
        system("cls");
        printf("\n1. Insertar elementos a la lista");
        printf("\n2. Imprimir lista");
        printf("\n0. Salir");
        opcion = ingresar_enteros("\nIngrese una opcion del menu");
        switch(opcion){
            case 1:
                dato = ingresar_enteros("\nIngresar un entero como dato del nodo a insertar");
                printf("\n");
                
                system("pause");
                break;
            case 2:
                
                system("pause");
                break;
        }
    }while(opcion != 0);

    system("pause");
    return 0;
}
