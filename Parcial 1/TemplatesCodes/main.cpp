#include <iostream>
#include "Operationes.cpp"
using namespace std;

int main(){
    float a,b;

    system("cls");

    cout << "Ingrese un valor: ";
    cin >> a;
    cout << "ingrese otro valor: ";
    cin >> b;

    Operaciones<float> intCalculo(a,b);

    intCalculo.calculo() ;
}