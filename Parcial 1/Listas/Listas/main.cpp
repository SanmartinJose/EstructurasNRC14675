#include <iostream>
#include "Nodo.h"
#include "ListaSimple.h"
#include "../validaciones.h"

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
                lista.insertar_cabeza(dato);
                system("pause");
                break;
            case 2:
                lista.imprimir();
                system("pause");
                break;
        }
    }while(opcion != 0);

    system("pause");
    return 0;
}
