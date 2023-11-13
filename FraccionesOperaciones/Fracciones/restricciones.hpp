#include <iostream>
#include <limits>

using namespace std;

int obtenerNumero()
{
    int numero;
    cout << "Ingrese un numero : ";
    while (!(cin >> numero))
    {
        cout << "Entrada inválida. Por favor, ingrese un numero: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return numero;
}

int diferenteDeCero()
{
    int denominador;
    do
    {
        cout << "Ingrese un numero diferente de 0: ";
        while (!(cin >> denominador))
        {
            cout << "Entrada inválida. Por favor, ingrese un numero: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (denominador == 0)
        {
            cout << "Entrada inválida. Por favor, ingrese un numero diferente de 0: " << endl;
        }
    } while (denominador == 0);
    return denominador;
}