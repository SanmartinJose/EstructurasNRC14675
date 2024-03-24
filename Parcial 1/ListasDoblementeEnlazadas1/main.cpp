#include "ListaDoble.h"
#include "validaciones.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int opcion, dato, seguir;
    Nodo* cabeza;    
    ListaDoble lista;
    do
    {
        system("cls");
        cout << "***********Listas Dobles***********" << endl;
        cout << "1. Insertar" << endl;
        cout << "2. Buscar" << endl;
        cout << "3. Eliminar" << endl;
        cout << "4. Mostrar" << endl;
        cout << "5. Invertir" << endl;
        cout << "6. Entre" << endl;
        cout << "7. Salir" << endl;
        

        opcion = ingresar_enteros("\nIngrese una opcion del menu: ");
        
        switch (opcion)
        {
        case 1:
            dato = ingresar_enteros("\nIngesar un entero como dato del nodo a ingresar");
            cout << endl;
            lista.Insertar(dato);
            lista.Mostrar();
            system("pause");
            break;
        case 2:
            dato = ingresar_enteros("\nIngesar un entero como dato del nodo a ingresar");
            cout << endl;
            lista.Buscar(dato);
            system("pause");
            break;
        case 3:
            dato = ingresar_enteros("\nIngesar un entero como dato del nodo a ingresar");
            cout << endl;
            lista.Eliminar(dato);
            lista.Mostrar();
            system("pause");
            break;
        case 4:
            lista.Mostrar();
            system("pause");
            break;
        case 5:
            lista.Mostrar();
            lista.Invertir();
            lista.Mostrar();
            system("pause");
        case 6:
            lista.Mostrar();
            printf("\n");
            printf("ingrese la posicion: ");
            int key; 
            cin>>key;
            printf("ingrese el dato: ");
            int dato;
            cin>>dato;
            lista.InsertarMedio(key,dato);
            lista.Mostrar();
            system("pause");
        case 7:    
            cout<<"Hey"<<endl;        
            int sumaDigitosPares = lista.sumarDigitosPares(cabeza);
            cout << "La suma de los dígitos pares es: " << sumaDigitosPares << endl;
            system("pause");
        }
        
    } while (opcion != 9);
    
    return 0;
}
