#include <iostream>
#include "Nodo.h"
#include "ListaSimple.h"
#include "validaciones.h"

int main()
{
    int opcion, dato;
    ListaSimple lista;

    do{
        system("cls");
        printf("\n1. Insertar por la cabeza");
        printf("\n2. Insertar por la cola");
        printf("\n3. Imprimir por la cabeza");
        printf("\n4. Imprimir por la cola");
        printf("\n5. Buscar");
        printf("\n6. Eliminar por la cabeza");
        printf("\n7. Imprimir por la cola");
        printf("\n7. Suma de enteros");
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
                dato = ingresar_enteros("\nIngresar un entero como dato del nodo a insertar");
                printf("\n");
                lista.insertar_cola(dato);
                system("pause");
                break;    
            case 3:
                printf("\n");
                lista.imprimir_desde_la_cabeza();                
                system("pause");
                break;
            case 4:
                printf("\n");
                lista.imprimir_desde_la_cola();
                system("pause");
                break;
            case 5:
                dato = ingresar_enteros("\nIngresar el valor a buscar");
                printf("\n");
                lista.buscar(dato);
                system("pause");
                break;
            case 6:
                printf("\n");
                lista.eliminar_por_la_cabeza();
                system("pause");
                break;
            case 7:
                printf("\n");
                lista.eliminar_por_la_cola();
                system("pause");
                break;
            case 8:
                printf("\n");
                lista.sumarLista();                
                system("pause");
                break;
             
        }
    }while(opcion != 0);

    system("pause");
    return 0;
}
