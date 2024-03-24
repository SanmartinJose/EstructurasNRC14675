#include <iostream>
#include "TemplateExample.hpp"
using namespace std;



template <typename T>
void Operaciones<T>::calculo(){
    cout << valor1 << "+" << valor2 << "=" << suma() << endl;
    cout << valor1 << "-" << valor2 << "=" << resta() << endl;
    cout << valor1 << "*" << valor2 << "=" << multiplicacion() << endl;
    cout << valor1 << "/" << valor2 << "=" << division() << endl;
}

template <typename T>
T Operaciones <T>::suma(){
    return valor1+valor2;
}

template <typename T>
T Operaciones <T>::resta(){
    return valor1-valor2;
}

template <typename T>
T Operaciones <T>::multiplicacion(){
    return valor1*valor2;
}

template <typename T>
T Operaciones <T>::division(){
    return valor1/valor2;
}