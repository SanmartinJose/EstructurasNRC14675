#include "Cola.h"
#include "validaciones.h"
#include <iostream>

int main(int argc, char const *argv[]) {
    int opcion, dato;
    Cola cola;
    Cola colaPares, colaImpares, colaSumaPares, colaElvada, colaFactorial;

    do {
        system("cls");
        printf("\n1. Insertar elementos a la cola");
        printf("\n2. Eliminar elemento de la cola");
        printf("\n3. Imprimir cola");
        printf("\n4. Dejar Pares");
		printf("\n5. Sumar Posiciones Pares");
		printf("\n6. Dejar Impares");
		printf("\n7. Buscar primera iteracion");
        printf("\n8. Sacar numeros pares a nueva cola y sumalas");
        printf("\n9. Saca el primer y ultimo valor de la Cola");
        printf("\n10. Ingresar numero sin repetir");
        printf("\n11. Nodo Mayor");
        printf("\n12. Fibonacci");
        printf("\n13. Elvar a un exponente");
        printf("\n14. Factorial");
        printf("\n15. Factorial Recursivo");
        printf("\n0. Salir");

        opcion = ingresar_enteros("\nIngrese una opcion del menu");

        if (opcion == 1) {
            dato = ingresar_enteros("\nIngresar un entero como dato del nodo a insertar:");
            printf("\n");
            cola.mete(dato);
            system("pause");
        } else if (opcion == 2) {
            printf("\n");
            cola.saca();
            system("pause");
        } else if (opcion == 3) {
            printf("\n");
            cola.muestra();
            system("pause");
        } else if (opcion == 4) {
            cola.muestra();
			cola.dejarPares(&colaPares);
			colaPares.muestra();
            system("pause");
        } else if (opcion == 5) {
			cola.sumaPosicionesPares();
			//cola.sumaPosicionesParesNodo(cola.obtenerCabeza());
            system("pause");
        }else if (opcion == 6){
			cola.muestra();
			cola.dejarImpares(&colaImpares);
			colaImpares.muestra();
			system("pause");
		}else if (opcion == 7)
		{
			dato = ingresar_enteros("\nIngresar un entero como dato a buscar:");
			printf("\n");
			cola.numeroDentro(dato);
			system("pause");
		}else if (opcion ==8)
        {
            cola.muestra();
            cola.sacaNParesYSuma(&colaSumaPares);
            colaSumaPares.muestra();
            system("pause");
        }else if (opcion == 9)
        {
            cola.muestra();
            cola.sacaPrimeroEnLista();
            cola.sacaUltimoEnLista();
            system("pause");
        }else if (opcion == 10)
        {
            dato = ingresar_enteros("\nIngresar un entero como dato a insertar:");
			printf("\n");
			cola.ingresoSinRepetir(dato);
			system("pause");
        }else if (opcion == 11)
        {
            int mayor = cola.nodoMayor();
            if (mayor != -1)
            {
                printf("El numero mayor es: %d", mayor);
            }

            system("pause");
        }else if (opcion == 12)
        {
            dato = ingresar_enteros("\nIngesar el numero de iteraciones");
            cola.fibonacci(dato);
            cola.muestra();
            system("pause");
        }else if (opcion == 13)
        {
            dato = ingresar_enteros("\nIngrese el valor a cual quiere elevar:");
            cola.elevaNVeces(dato, &colaElvada);
            colaElvada.muestra();
            colaElvada.limpiar();

            system("pause");
        }else if (opcion == 14)
        {
            cola.factorial(&colaFactorial);
            colaFactorial.muestra();
            colaFactorial.limpiar();
            system("pause");
        }else if (opcion == 15)
        {
            cola.factorialRecursivo(&colaFactorial);
            colaFactorial.muestra();
            colaFactorial.limpiar();
            system("pause");
        }



    } while (opcion != 0);


    return 0;
}
