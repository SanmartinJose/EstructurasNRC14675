#include <iostream>
#include "validaciones.h"
#include "Cola.cpp"


int main()
{
    int opcion, dato,valor;
	Cola cola;
	Cola cola2;
	do {
		system("cls");
		printf("\n1. Insertar elementos a la cola");
		printf("\n2. Eliminar elemento de la cola");
		printf("\n3. Imprimir cola");
		printf("\n4. Dejar Pares");
		printf("\n5. Suma pos Pares");
		printf("\n6. Extraer Pares");
		printf("\n7. Buscar");
		printf("\n8. Repite");
		printf("\n0. Salir");
		opcion = ingresar_enteros("\nIngrese una opcion del menu");
		switch (opcion) {
		case 1:
			dato = ingresar_enteros("\nIngresar un entero como dato del nodo a insertar:");
			printf("\n");
			cola.insertar(dato);
			system("pause");
			break;
		case 2:
			printf("\n");
			cola.eliminar();
			system("pause");
			break;
		case 3:
			printf("\n");
			cola.imprimir();
			system("pause");
			break;
		case 4:
			printf("\n");
			cola.dejar_pares(&cola2);
			system("pause");
			break;
		case 5:
		printf("\n");
		cola.imprimir();
		printf("\n");
		cola.sumarPosPares(cola.getCabeza());
		system("pause");
			break;
        case 6:
		printf("\n");
		cola.imprimir();
		printf("\n");
		cola.dejar_pares(&cola2);
		printf("\n");
		cola2.imprimir();
		printf("\n");
		system("pause");
			break;
        case 7:
		printf("\n");
		valor = ingresar_enteros("Ingresar el numero a buscar");
		printf("\n");
		cola.encontrarValor(valor);
		printf("\n");
		system("pause");
			break;
        case 8:
		printf("\n");
		valor = ingresar_enteros("Ingresar el numero a ingresar");
		printf("\n");
		cola.noRepite(valor);
		printf("\n");
		system("pause");
			break;
		}

	} while (opcion != 0);

	system("pause");
    return 0;
}
